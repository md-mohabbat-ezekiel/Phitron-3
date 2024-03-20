#lamda
# def doubled(x):
#     return x*2
# lamda input:operation
doubled=lambda num:num*2
add=lambda x,y:x+y
sum=add(11,33)
result=doubled(44)
print(result)
print(sum)

# map operaton ,number 
numbers=[12,56,98,78,12,6,98]
doubled_nums=map(doubled,numbers)
double_num=map(lambda x:x*2,numbers)
print(numbers)
print(list(doubled_nums))


actors=[
        {'name':'nabana','age':5}
        {'name':'kabana','age':15}
        {'name':'rabana','age':45}
        {'name':'pabana','age':65}
       ]

juniors=filter(lambda actor: actor['age']<40,actors)
print(list(juniors))