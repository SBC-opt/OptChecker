import re

#loc of optimized myMark in dst/test.s

optimizedMarks = []  #result

pattern = r"myMark(\d+).*\n.*\$0"
filename = "/root/OptChecker_asm/licm2cp_llvm/reduce/dst/test.s"
with open(filename, 'r') as file:
    content = file.read()

matches = re.findall(pattern, content, re.MULTILINE)

if matches:
    for match in matches:
        print(int(match))
        optimizedMarks.append(int(match))

#file = open("/root/OptChecker_asm/licm2cp_llvm/reduce/dst/test.s", "r")

#lines = file.readlines()

#optimizedMarks = []  #result

#for line in lines:
#    match = re.search(r'0, myMark(\d+)', line)
#    if match:
#        my_mark_value = int(match.group(1))
#        print(my_mark_value)
#        optimizedMarks.append(my_mark_value)

#file.close()


#loc of expression corresponding to optimizedMarks

file = open("/root/OptChecker_asm/licm2cp_llvm/reduce/dst/LicmMarks.txt", "r")

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

filename = "/root/OptChecker_asm/licm2cp_llvm/reduce/src/notOptimized.txt"  

srcpairs = []  #result

with open(filename, 'r') as file:
    for line in file.readlines():
        pair = tuple(map(int, line.split()))
        srcpairs.append(pair)

#notOpitimized loc of expression out of loop

filename = "/root/OptChecker_asm/licm2cp_llvm/reduce/src/notOptimizedOutOfLoop.txt"  

srcOutOfLooppairs = []  #result

with open(filename, 'r') as file:
    for line in file.readlines():
        pair = tuple(map(int, line.split()))
        srcOutOfLooppairs.append(pair)


# get result
res = []
print ("\n\n\n[Missed opportunities]:")
print ("------------------------")
print ("    %s\t%s"%('line','row'))
for loc in locOfoptimizedMarks:
    if loc in srcpairs and loc not in srcOutOfLooppairs:
        missedopt = loc
        print ("    %d\t\t%d"%(missedopt[0],missedopt[1]))
        res.append(list(map(str, missedopt)))
print ("------------------------")

ff = open('/root/OptChecker_asm/licm2cp_llvm/reduce/src/result.txt','w')
all_result = []
for i in res:
    lint = " ".join(i)
    all_result.append(lint)
for a in all_result:
    if("\n" not in a):
        a = a+"\n"
    ff.write(a)
ff.close()