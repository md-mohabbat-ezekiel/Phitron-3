"""
mutable language c++
 string a="Hello"
 a[0]='G'
 result given a="Gello" 

"""
""" 
# immutable python
a="Hello"
a[0]='G'
result given error
"""
a="Hello"
for ch in a:
    print(ch,end=" ")

# python build_in_function 
"""
capitalize() || upper() || lower() || casefold() || find()
count() || module inport || replace()  
"""
#capatalize
b="phitron"
c="PHITRON"
print("capatalize: ",b.capitalize())
print("upper: ",b.upper())
print("lower: ",c.lower())
print("lower/casefold: ",c.casefold())

#find index
text="Hello,world"
src1="world"
src2="x"
index1=text.find(src1)
index2=text.find(src2)
print(index1)
if index2!=-1:
    print(f"the result '{src2}' was found at index '{index2}' ")
else:
    print("Not found")

#count
text2="phitrooon"
print(text2.count('i'))#how much i 

# module import
from collections import Counter as ctr
print(ctr(text2))





    
