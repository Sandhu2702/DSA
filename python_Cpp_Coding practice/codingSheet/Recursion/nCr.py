def nCr(n,r):
    if r==0 or r==n:
        return 1

    return nCr(n-1, r-1) + nCr(n-1, r)

n=5
r=2
print(nCr(n,r))