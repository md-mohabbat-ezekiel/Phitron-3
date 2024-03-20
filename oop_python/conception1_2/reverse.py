t=int(input())
# range(end)-->0,end-1 && i++
# range(start,end)-->start,end-1 && i++
for i in range(t):
    # a=list(map(int,input().split()))
    a=list(input())
    a.reverse()
    result1=' '.join(a)
    print(result1)

""" 
# lst1=list(range(0,10,2))
# print(lst1)

# join-->list to string convert

lst=[1,2,3,4] # 1 2 3 4
ls=['h','i','l'] #hill

# lst er element gula join korbo
# 1.lst te jodi int value thake map die segula 
# trying e convert kore nebo
# 2.erpor jon function chalabo

lst=map(lambda i:str(i),lst)
print(lst)
res=" ".join(lst)
print(res)



 """




