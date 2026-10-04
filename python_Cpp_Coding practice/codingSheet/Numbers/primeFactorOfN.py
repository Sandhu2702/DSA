def primeFactors(n):
    ans=[]
    i=2
    while i<=n:
        if n%i==0:
            ans.append(i)
            n=n//i
        else:
            i+=1
    return ans

if __name__=="__main__":
    n=int(input("Enter n: "))
    print(primeFactors(n))