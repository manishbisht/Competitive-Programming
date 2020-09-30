marks = {}
for _ in range(int(input())):
    line = input().split()
    marks[line[0]] = list(map(float, line[1:])) 
print('%.2f' %(sum(marks[input()])/3))


