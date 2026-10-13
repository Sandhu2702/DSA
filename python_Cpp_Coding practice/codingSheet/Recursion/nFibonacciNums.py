def nthFibonacci(n):
    if n==0:
        return 0
    elif n==1:
        return 1
    else:
        return nthFibonacci(n-2)+nthFibonacci(n-1)

def nFibonacciNums(n):
    ans=[]
    for i in range(n):
        ans.append(nthFibonacci(i))

    return ans

if __name__=="__main__":
    n=7
    res=nFibonacciNums(n)
    print(res)