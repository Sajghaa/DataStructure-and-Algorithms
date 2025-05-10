ages = [7, 3, 9, 12, 11]

n = len(ages)
for i in range(n-1):
    swapped = False
    for j in range(n-i-1):
        if ages[j] > ages[j+1]:
            ages[j], ages[j+1] = ages[j+1], ages[j]
            swapped = True
    if not swapped:
        break

print("Sorted array:", ages)