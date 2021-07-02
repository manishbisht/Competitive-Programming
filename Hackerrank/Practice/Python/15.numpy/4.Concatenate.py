import numpy as np
n, m, p = map(int,input().split())
arrp1 = np.array([input().split() for _ in range(n)],int)
arrp2 = np.array([input().split() for _ in range(m)],int)
print(np.concatenate((arrp1, arrp2), axis = 0))



