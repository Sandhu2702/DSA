def InversionCount(arr,n):
    if arr==None:
        return -1

    if n<2:
        return 0

    count=0
    for i in range(n):
        for j in range(i+1,n):
            if arr[i]>arr[j]:
                count+=1

    return count


arr=[1,20,6,4,5]
n=len(arr)

print("Total counts: ",InversionCount(arr,n))
