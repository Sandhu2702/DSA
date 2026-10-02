def avgOfAll(nums):
    if not arr:
        return 0
    
    n=len(nums)
    sum=0
    for el in nums:
        sum+=el

    return sum/n

arr = list(map(int,input("Enter elements: ").split()))
print(avgOfAll(arr))
