A =[10, 20, 30, 40, 50]
x = 25
pos = 2

A.append(0) # to increase size by 1
for i in range(len(A)-2, pos-1, -1):
    A[i+1] = A[i]

A[pos] = x

print("Array after insertion:", A)