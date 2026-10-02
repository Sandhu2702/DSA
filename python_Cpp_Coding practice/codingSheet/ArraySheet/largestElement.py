def largestElement(arr):
    n=len(arr)
    largest=float('-inf')
    for i in range(n):
        if arr[i]>largest:
            largest=arr[i]
    return largest

arr=list(map(int,input("Enter elements").split()))
print("Largest: ",largestElement(arr))