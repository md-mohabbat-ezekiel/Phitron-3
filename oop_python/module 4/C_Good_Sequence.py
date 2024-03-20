# code given below
s=input()
n=[int(i) for i in input().split(" ")]
numbers = {}

for num in n:
    if(num not in numbers):
        numbers[num] = 0
    
    numbers[num] += 1 

total = 0
for key, val in numbers.items():
    if(val > key):
        total += val - key
    elif(val < key): total += val         
print(total)