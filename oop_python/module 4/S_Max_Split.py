s=input()
l=r=0
list=[]
i=j=0

for ch in s:
    if(ch == 'L'):
        l += 1
    else:
        r += 1
    j += 1    
        
    if(l==r):
        list.append(s[i:j])
        i = j
        l = r = 0
        
print(len(list))
for str in list:
    print(str)