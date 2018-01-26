# Modification of this problem http://www.geeksforgeeks.org/count-possible-paths-top-left-bottom-right-nxm-matrix/

def krakenCount(m, n):
    if m == 1 or n == 1:
        return 1
    return krakenCount(m-1, n) + krakenCount(m-1, n-1) + krakenCount(m, n-1)
