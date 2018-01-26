# Enter your code here. Read input from STDIN. Print output to STDOUT
data_range = [i for i in raw_input().strip().split(', ')]
data = raw_input()
data = raw_input()
output = {}
while data:
    data = [i for i in data.strip().split(', ')]
    data[2] = int(data[2])
    data[0] = data[0][:-3]
    if data_range[0] <= data[0] < data_range[1]:
        if data[0] in output.keys():
            if data[1] in output[data[0]].keys():
                output[data[0]][data[1]] += data[2]
            else:
                output[data[0]][data[1]] = data[2]
        else:
            output[data[0]] = {}
            output[data[0]][data[1]] = data[2]
    try:
        data = raw_input()
    except EOFError:
        data = ""
for i in sorted(output.keys(), reverse = True):
    line = i
    for j in sorted(output[i].keys()):
        line += ', ' + j + ', ' + str(output[i][j])
    print line
