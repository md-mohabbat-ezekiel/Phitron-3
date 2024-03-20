n=int(input())
a=[int(i) for i in input().split(" ")]
flag=True
cnt=0

while flag is True:
    for i, num in enumerate(a):
        if num % 2 == 1:
            flag = False
            break
        else:
            a[i] /= 2
    if flag: cnt += 1  
print(cnt)