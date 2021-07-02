messageCount = {}


def process_line(chat_line):
    username = chat_line.split('<')[1].split('>')[0]
    if username in messageCount.keys():
        messageCount[username] += 1
    else:
        messageCount[username] = 1


f = open('chats.txt')
while True:
    line = f.readline()
    if not line or "<" not in line or ">" not in line:
        break
    process_line(line)


sorted_data = sorted(messageCount.items(), key=lambda x: x[1], reverse=True)
print "The 3 most active users are {}, {} and {}.".format(sorted_data[0][0], sorted_data[1][0], sorted_data[2][0])
