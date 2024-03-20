# pythonic
# list,tuple,set,dictionary,string

# list--> mutable
# tuple,string -->immutable

# a=(1,3,4,[2,4,5],{1:23,3:56})
# print[3]=100
# print(a)

# print the value of key 'history' from the below dict
sampleDect={
    "class":{
        "student":{
            "name":"mike",
            "marks":{
                "physices":70,
                "history":70
                }
            }
        }
    }
# sampleDect.get('history')

print(sampleDect['class']['student']['marks']['history'])

# len("string")
# len([1,2,3])

# a=10
# b=10
# print(id(a))
# print(id(b))
# same index printed pointer

a=input() #string formate data nebe
b=float(input()) #input given type

# mutilple input in one line
# multuple input in multiple line

# list=[]
# for i in range(0,a):
#     x=int(input(x))
#     list.append(x)
# print(list)

# split,join
# split-->string to list
# join-->list to string

lst=[]
# lst=map(func,datastructure)
lst=tuple(map(int,input().split()))
print(lst)
# 1 2 3
# <map object at 0x000001DFEDA2A470>
# 1 2 3

lst1=[1,2,3,4]
# for i in range(0,len(lst1)):
#     lst[i]=lst[i]*lst[i]
# print(lst)

# map
# map doesn't given human readabe formate result 
def sq(i):
    return i*i
result=map(sq,lst1)
print(list(result))

# lambda
result=map(lambda i:i*i,lst1)
print(tuple(result))

# list()--> se nije akta ds,sathe function o
# lst=[]-->list data structure
# s=list('hello')--> string to list convertion function
s="h e l l o"
print(list(s))
print(s.split(' '))

# tple=()
# result=tuple("aldffj")




