def maxOnesAfterZeroes(arr,k):
    left =0 
    zeroes=0
    maxLength=0
    n=len(arr)

    for right in range(n):
        if arr[right]==0:
            zeroes+=1

        while zeroes>k:
            if arr[left]==0:
                zeroes-=1

            left+=1

        maxLength = max(maxLength,right-left+1)

    return maxLength

arr=list(map(int,input("Enter elements: ").split()))
k=int(input("enter value of k: "))
print(maxOnesAfterZeroes(arr,k))