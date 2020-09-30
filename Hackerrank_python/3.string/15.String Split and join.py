def split_and_join(line):
    # write your code here
    line=line.split()
    line="-".join(line)
    return line

if __name__ == '__main__':
    line = input()
    result = split_and_join(line)
    print(result)
