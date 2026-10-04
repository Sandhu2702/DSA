def squareRootOfNum(n):
    for i in range(1,n+1):
        if i*i == n:
            return i

if __name__ == "__main__":
    n=int(input("enter any number: "))
    print("It's square root will be : ",squareRootOfNum(n))