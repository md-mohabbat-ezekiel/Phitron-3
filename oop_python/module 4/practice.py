N = int(input())
a = list(map(int, input().split()))
count_dict = {}

for num in a:
    if num in count_dict:
        count_dict[num] += 1
    else:
        count_dict[num] = 1

removals = 0

for num, count in count_dict.items():
    if count > num:
        removals += count - num
print(removals)
