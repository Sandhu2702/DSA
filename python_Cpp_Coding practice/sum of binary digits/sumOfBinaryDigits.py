def sumOfBinaryDigits(n):
    count=0
    while n>0:
        count+=(n & 1)
        n>>=1
    return count

n=int(input("Enter number: "))
print("Total sum of it's binary digits: ",sumOfBinaryDigits(n))