def maxSubarraySum(nums):
    n=len(nums)
    currentSum=0
    maxSum=0

    for el in nums:
        currentSum+=el

        maxSum=max(maxSum,currentSum)

        if currentSum<0:
            currentSum=0

    return maxSum

arr=list(map(int,input("Enter elements: ").split()))
print("Maximum subarray sum: ",maxSubarraySum(arr))

