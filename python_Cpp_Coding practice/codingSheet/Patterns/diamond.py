def diamondPattern(n):
    for i in range(1,n+1):
        spaces=" "*(n-i)
        stars="*"*(2*i-1)
        print(spaces+stars)

    for i in range(n,0,-1):
        spaces=" "*(n-i)
        stars="*"*(2*i-1)
        print(spaces+stars)

n=int(input("Enter n:"))
diamondPattern(n)
