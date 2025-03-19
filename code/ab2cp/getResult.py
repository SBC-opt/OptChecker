import re
import sys

#loc of myMark in dst/test.cpp


file = open(sys.argv[1]+"/dst/test.cpp", "r")

lines = file.readlines()

count = 1
specified_string = "myMark="
allMarks = {}  #result

for line in lines:
    match = re.search(r'myMark=(\d+)', line)
    if match:
        my_mark_value = int(match.group(1))
        #print(count, my_mark_value)
        allMarks[count] = my_mark_value
        
    count += 1

file.close()


#loc of expression corresponding to myMark

file = open(sys.argv[1]+"/dst/out1.txt", "r")

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


# get all cs
filename = sys.argv[1]+"/dst/cse.txt"  

allCs = {} #result

with open(filename, 'r') as file:
    for line in file.readlines():
        numbers = [int(num) for num in line.split()]
        key = numbers[0]
        value = numbers[1:]
        allCs[key] = value



# get result
res = []
print ("\n\n\n[Missed opportunities]:")
print ("------------------------")
print ("    %s\t%s"%('line','row'))
for key in allMarks.keys():
    if not any(x == key for x, y in dstpairs):
        #print(allMarks[key])  # n of myMark
        #print(locOfMarks[allMarks[key]]) #loc should be optimized
        if locOfMarks[allMarks[key]] in srcpairs:
            for cs in allCs[allMarks[key]]:
                #print(cs)
                #print(locOfMarks[cs][0])
                if any(x == locOfMarks[cs][0] for x, y in srcpairs):
                    missedopt = locOfMarks[allMarks[key]]
                    print ("    %d\t\t%d"%(missedopt[0],missedopt[1]))
                    res.append(list(map(str, missedopt)))
                    break
print ("------------------------")

ff = open(sys.argv[2],'w')
all_result = []
for i in res:
    lint = " ".join(i)
    all_result.append(lint)
for a in all_result:
    if("\n" not in a):
        a = a+"\n"
    ff.write(a)
ff.close()