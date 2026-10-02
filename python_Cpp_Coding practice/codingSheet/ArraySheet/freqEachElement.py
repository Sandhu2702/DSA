def freqOfEachElement(nums):
    m={}
    n=len(nums)
    for i in range(n):
        if nums[i] in m:
            m[nums[i]]+=1
        else:
            m[nums[i]]=1
    return m

arr=list(map(int, input("Enter elements: ").split()))
print(freqOfEachElement(arr))