n = int(raw_input())
for i in xrange(n):
    data = [int(j) for j in raw_input().split()]
    print str(data[0] + data[3]) + " " + str(data[1] + data[4]) + " " +str(data[2] + data[5])
    print (data[0] * data[3]) + (data[1] * data[4]) + (data[2] * data[5])
    print str((data[1] * data[5]) - (data[2] * data[4])) + ' ' + str((data[2] * data[3]) - (data[0] * data[5])) + ' ' + str((data[0] * data[4]) - (data[3] * data[1]))
