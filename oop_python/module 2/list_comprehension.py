numbers=[23,45,77,44,79,89,56]
odds=[]

for num in numbers:
    if num%2==1 and num%5==0:
        odds.append(num)
print(odds)        

odd_nums=[num for num in numbers if num%2==-1]

players=['sakib','mustafiz','mushfiq']
ages=[38,55,53]

age_comb=[]
for player in players:
    print('player:',player)
    for age in ages:
        print(player,age)
        age_comb.append([player,age])
print(age_comb)        