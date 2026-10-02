def reverseArray(nums):
    n=len(nums)
    left=0
    right=n-1
    while left<right:
        nums[left], nums[right]= nums[right], nums[left]
        left+=1
        right-=1
    return nums

arr=list(map(int,input("Enter elements: ").split()))
print(reverseArray(arr))