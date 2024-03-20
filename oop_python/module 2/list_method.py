numbers=[12,67,34,78,98,64]
numbers.append(55)
print(numbers)
numbers.insert(3,71)
print(numbers)
if 78 in numbers:
    numbers.remove(78)
print(numbers)
last=numbers.pop()
print(last,numbers)
if 34 in numbers:
    index=numbers.index(34)
    print(index)

sorted=numbers.sort()
print(numbers)
numbers.reverse()
print(numbers)



