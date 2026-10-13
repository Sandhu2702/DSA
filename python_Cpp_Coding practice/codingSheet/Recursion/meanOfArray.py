def meanOfArray(arr,n):
    if n==1:
        return arr[0]

    return ((meanOfArray(arr,n-1)*(n-1))+arr[n-1])/n

arr=[1,2,3,4,5]
print(meanOfArray(arr,len(arr)))