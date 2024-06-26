import numpy as np

data = np.loadtxt("../numbers.txt")
row_sums = int(np.sum(data ** 2, axis=0))

print(row_sums)