# creation list using function
a=list('hello')
# result ['h','e','l','l,'o]

# creating a list use of string
b=['phitron']
print (b)
# result ['phitron']
print(b[0])
#  result: phitron 
print(*b)

# creating a list with the use of multiple value
c=['a','b']
print(*a)
# result: a b

# muti_Dimentional list
d=[['a','b'],['c']]
print(d)
# result [['a','b'],['c']]

# pair
d=[['a','b'],['c']]
print (d[0][1]) #(d[row][colum])
for prs in d:
    for val in prs:
        print(val)
        """ 
        a
        b
        c
        """
# append & clear
e=[]
e.append(5)
e.append('a')
print (e)
print('before clear: ',e)
print(e.clear())
print("after clear: ",a)
# copy
f=['a','b']
g=f.copy()
print(g)

# insert any position
my_list=[1,2,3,4,5]
my_list.insert(2,10)
print(my_list)

# pop general last digit
my_list.pop()
# result: 1 2 3 4
# pop any position list
my_list.pop(1)
# result: 1 3 4 5
deleted_value= my_list.pop(1)
print(deleted_value)
# result 2

# remove any value
m_list=[1,2,3,4,5,6]
m_list.remove(3)
print(m_list)
# result : 1 2 4 5 6


#  sort
List=[12,45,77,34,78,93]
List.sort()
print(List)
# reverse
List.reverse()
print(List)

 



