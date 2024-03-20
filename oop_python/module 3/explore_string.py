name1='sakib khan'
name2="sakib khan"
# multiline string
name3=""" sakib khan 
          cricket
      """
name4='sakib\'s khan'
# print sakib's khan
print(name4)

# string sequence of charector
for char in name2:
    print (char)

print(name2[3])#3 number index print
print(name2[1:3])# 1 to 3 index
print(name2[-2])# reverse 2 index (h)
print(name2[::-1]) # nahk bikas

#mutable means changeable
"""
sting immutable
name2[0]='R'
print(name2)
garbege 
"""

if 'khan' in name2:
    print('exist')

#upper
print(name2.upper())

