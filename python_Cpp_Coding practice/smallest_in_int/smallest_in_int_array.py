n=int(input())
min=float('inf')
for x in range(n):
    num=int(input())
    if num<min:
        min=num
print(min)