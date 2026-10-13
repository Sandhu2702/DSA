def sumNaturalNumbers(n):
    if n==0:
        return 0

    return n+sumNaturalNumbers(n-1)

if __name__=="__main__":
    n=3
    print(sumNaturalNumbers(n))