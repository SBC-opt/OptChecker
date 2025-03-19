import re
import sys

#loc of myMark in dst/test.cpp


file = open(sys.argv[1]+"/dst/test.cpp", "r")

lines = file.readlines()

count = 1
allMarks = {}  #result

for line in lines:
    match = re.search(r'myMark(\d+)=', line)
    if match:
        my_mark_value = int(match.group(1))
        #print(count, my_mark_value)
        allMarks[count] = my_mark_value
        
    count += 1

file.close()


#loc of expression corresponding to myMark

file = open(sys.argv[1]+"/dst/Marks.txt", "r")

lines = file.readlines()

locOfMarks = {} #result

for line in lines:
    match = re.search(r'^(\d+).*:(\d+):(\d+)', line)

    if match:
        key = int(match.group(1))
        line_number = int(match.group(2))
        column_number = int(match.group(3))
        
        extracted_dict = {key: (line_number, column_number)}
        #print(extracted_dict)  #{1: (5, 20)}
        locOfMarks[key] = (line_number, column_number)


#notOpitimized loc of myMark and expression

filename = sys.argv[1]+"/dst/notOptimized.txt"  

dstpairs = []  #result

with open(filename, 'r') as file:
    for line in file.readlines():
        pair = tuple(map(int, line.split()))
        dstpairs.append(pair)

filename = sys.argv[1]+"/src/notOptimized.txt"  

srcpairs = []  #result

with open(filename, 'r') as file:
    for line in file.readlines():
        pair = tuple(map(int, line.split()))
        srcpairs.append(pair)


# get result
res_opt1 = []
print ("\n\n\n[Missed opportunities for Opt1]:")
print ("------------------------------------------")
print ("    %s\t%s"%('line','row'))
for key in allMarks.keys():
    if not any(x == key for x, y in dstpairs):
        #print(allMarks[key])  # n of myMark
        #print(locOfMarks[allMarks[key]]) #loc should be optimized
        if (locOfMarks[allMarks[key]][0] in [first for first, second in srcpairs]):
            missedopt = locOfMarks[allMarks[key]]
            print ("    %d\t\t%d"%(missedopt[0],missedopt[1]))
            res_opt1.append(list(map(str, missedopt)))
print ("------------------------------------------")

res_opt2 = []
print ("\n\n\n[Missed opportunities for Opt2]:")
print ("------------------------------------------")
print ("    %s\t%s"%('line','row'))
for key in allMarks.keys():
    if (locOfMarks[allMarks[key]][0] not in [first for first, second in srcpairs]):
        if any(x == key for x, y in dstpairs):
            missedopt = locOfMarks[allMarks[key]]
            print ("    %d\t\t%d"%(missedopt[0],missedopt[1]))
            res_opt2.append(list(map(str, missedopt)))
print ("------------------------------------------")

ff = open(sys.argv[2],'a')
if res_opt1:
    ff.write("Missed opportunities for Opt1: \n")
    all_result = []
    for i in res_opt1:
        lint = " ".join(i)
        all_result.append(lint)
    for a in all_result:
        if("\n" not in a):
            a = a+"\n"
        ff.write(a)

if res_opt2:
    ff.write("Missed opportunities for Opt2: \n")
    all_result = []
    for i in res_opt2:
        lint = " ".join(i)
        all_result.append(lint)
    for a in all_result:
        if("\n" not in a):
            a = a+"\n"
        ff.write(a)

ff.close()