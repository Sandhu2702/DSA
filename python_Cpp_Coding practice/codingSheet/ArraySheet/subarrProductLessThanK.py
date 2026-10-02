def subarrayProduct(arr,k):
    n=len(arr)

    if k<0:
        return 0

    left=0
    product=1
    count=0

    for right in range(n):
        product*=arr[right]

        while product>=k:
            product//=arr[left]
            left+=1

        count+=right-left+1

    return count

arr=list(map(int,input("enter elements: ").split()))
k=int(input("Enter value of k: "))
print("Count of subarrays whose product is less than k: ",subarrayProduct(arr,k))