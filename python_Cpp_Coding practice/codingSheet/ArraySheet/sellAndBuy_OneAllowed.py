# Find the maximum profit from one buy and one sell transaction 

# def sellBuyOneAllowed(arr):
#     n=len(arr)
#     maxProfit=0

#     for i in range(n):
#         for j in range(i+1,n):
#             diff=arr[j]-arr[i]
#             maxProfit=max(diff,maxProfit)

#     return maxProfit

def sellBuyOneAllowed(prices):
    n=len(prices)
    maxProfit=0
    minPrice=prices[0]

    for i in range(1,n):
        minPrice = min(minPrice,prices[i])
        maxProfit=max(maxProfit,prices[i]-minPrice)
        
    return maxProfit

arr=list(map(int,input("enter prices: ").split()))
print("Max Profit will be: ",sellBuyOneAllowed(arr))