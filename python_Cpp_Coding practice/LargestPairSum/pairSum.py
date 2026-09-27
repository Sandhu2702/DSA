def FindLargestPairSum(arr,n):
    firstMax=float('-inf') 
    secondMax=float('-inf')
    for i in range(n):
        if arr[i]>firstMax:
            secondMax=firstMax
            firstMax=arr[i]
        elif arr[i]>secondMax:
            secondMax=arr[i]

    return firstMax+secondMax

n=int(input("enter number of elements in array: "))
arr=list(map(int,input("enter elements").split()))
n=len(arr)
print("Largest Pair Sum: ", FindLargestPairSum(arr,n))
