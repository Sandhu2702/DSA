def  decimalToBinary(n):
    binary=""

    while n>0:
        digit = n%2
        binary+=str(digit)
        n//=2

    return binary[::-1]

n=int(input("Enter n: "))
print("Binary: ",decimalToBinary(n))