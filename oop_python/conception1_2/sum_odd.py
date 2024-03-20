t=int(input())

for i in range(t):
    x,y=input().split()
    x=int(x)
    y=int(y)
    # swap
    if x>y:
        y,x=x,y

    res=0
    for i in range(x+1,y):
        if i%2!=0:
            res+=i
    print(res)

