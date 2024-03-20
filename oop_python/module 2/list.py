# list,array,collection is same (simple terms)
# index  0  1  2  3  4  5  6  7  8  9
numbers=[45,56,12,34,67,88,89,34,90,77]
# index -10 -9 -8 -7 -6 -5 -4 -3 -2 -1

print(numbers[3],numbers[-3])
# list(start:end) start from the start index and stops befor end index
print(numbers[2:6])
# list(start:end:step)
print(numbers[1:7:1])
# revers
print(numbers[7:2:-1])

print(numbers[4:])
print(numbers[:5])
print(numbers[:])
print(numbers[::-1])
