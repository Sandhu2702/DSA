def max_region(n):
    return (n*(n+1))//2+1
n=int(input("Enter n:"))
print("Maximum possible regions: ",max_region(n))
