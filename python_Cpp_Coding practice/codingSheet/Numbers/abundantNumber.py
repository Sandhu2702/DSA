#A number is called an Abundant Number when the sum of its proper divisors is greater than the number itself.
def abundantNumber(n):
    sum=0
    for i in range(1,n):
        if n % i == 0:
            sum+=i

    if sum>=n:
        return True
    return False

n=int(input("enter a number: "))

if abundantNumber(n):
    print("Abundant Number")
else:
    print("Not an Abundant Number")