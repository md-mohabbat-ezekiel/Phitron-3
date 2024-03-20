x,y=input().split()
x=int(x)
y=int(y)

sum=0
# 5^0+5^1+5^3+..
for i in range(0,y,2):
    sum+=x**(i)
sum-=1    
print(sum)
