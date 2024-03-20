#set: unique iteams collection and no duplicate
numbers=[12,56,98,78,12,6,98]
print(numbers)
numbers_set=set(numbers)
print(numbers)#{12,56,98,78,12,6,98}

""" 
list []
tuple ()
set {}
"""
#set mutable but unodered index
numbers_set.add(55)
print(numbers_set)

numbers_set.remove(6)
print(numbers_set)

A={1,3,5,7}
B={1,2,3,4,5}
print(A&B) #common
print(A|B) #AUB all number

