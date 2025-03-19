import re
import sys

#loc of optimized myMark in dst/test.s


file = open(sys.argv[1]+"/dst/test.s", "r")

lines = file.readlines()

optimizedMarks = []  #result

for line in lines:
    match = re.search(r'\$0, myMark(\d+)', line)
    if match:
        my_mark_value = int(match.group(1))
        print(my_mark_value)
        optimizedMarks.append(my_mark_value)

file.close()


#loc of expression corresponding to optimizedMarks

file = open(sys.argv[1]+"/dst/Marks.txt", "r")

lines = file.readlines()

locOfoptimizedMarks = [] #result

for line in lines:
    match = re.search(r'^(\d+).*:(\d+):(\d+)', line)

    if match:
        key = int(match.group(1))
        line_number = int(match.group(2))
        column_number = int(match.group(3))
        
        if key in optimizedMarks:
            locOfoptimizedMarks.append((line_number, column_number))
            print((line_number, column_number))


#notOpitimized loc of expression

filename = sys.argv[1]+"/src/notOptimized.txt"  

srcpairs = []  #result

with open(filename, 'r') as file:
    for line in file.readlines():
        pair = tuple(map(int, line.split()))
        srcpairs.append(pair)

# get result
res = []
print ("\n\n\n[Missed opportunities]:")
print ("------------------------")
print ("    %s\t%s"%('line','row'))
for loc in locOfoptimizedMarks:
    if any(loc[0] == pair[0] and loc[1] <= pair[1] for pair in srcpairs):
        missedopt = loc
        print ("    %d\t\t%d"%(missedopt[0],missedopt[1]))
        res.append(list(map(str, missedopt)))
print ("------------------------")

ff = open(sys.argv[2],'a')
all_result = []
for i in res:
    lint = " ".join(i)
    all_result.append(lint)
for a in all_result:
    if("\n" not in a):
        a = a+"\n"
    ff.write(a)
ff.close()