# Find the maximum profit with multiple buy and sell transactions.

def profit_multiAllowed(prices):
    n=len(prices)
    profit=0

    for i in range(1,n):
        if prices[i]>prices[i-1]:
            profit+=(prices[i]-prices[i-1])

    return profit

arr=list(map(int,input("enter prices: ").split()))
print(profit_multiAllowed(arr))