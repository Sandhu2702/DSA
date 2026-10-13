def geometric_sum(n):
    if n==0:
        return 1

    return 1/pow(3,n)+geometric_sum(n-1)

n=5
print(geometric_sum(n))