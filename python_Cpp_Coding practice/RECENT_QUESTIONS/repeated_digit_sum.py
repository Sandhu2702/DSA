#Jab tak sum single digit (0–9) na ban jaye, tab tak digits ka sum karte raho.
n=38
# while n>10:
#     sum=0
#     while n>0:
#         sum+=(n%10)
#         n=n//10
#     n=sum

# print(n)

#2nd method-----------------
while n>=10:
    n=sum(int(digit) for digit in str(n))

print(n)