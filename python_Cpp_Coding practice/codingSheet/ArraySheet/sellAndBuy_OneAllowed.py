# Find the maximum profit from one buy and one sell transaction 

def sellBuyOneAllowed(arr):
    n=len(arr)
    maxProfit=0

    for i in range(n):
        for j in range(i+1,n):
            diff=arr[j]-arr[i]
            maxProfit=max(diff,maxProfit)

    return maxProfit

arr=list(map(int,input("enter prices: ").split()))
print("Max Profit will be: ",sellBuyOneAllowed(arr))