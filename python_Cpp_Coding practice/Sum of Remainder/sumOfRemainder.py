def FindSumRemainder(n,div):
    if div<=0:
        return 1
    total=0
    for i in range(1,n+1):
        total+=(i%div)
    return total

n=12
div=4
print("Sum of remaniers of elements after division by div:",FindSumRemainder(n,div))