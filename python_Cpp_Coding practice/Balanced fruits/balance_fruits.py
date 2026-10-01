# Balance apples and mangoes by adjusting the available rupees.

def balanceFruits(a,m,rs):
    if a>m:
        rs-=(a-m)
    if m>a:
        rs+=(m-a)

    return rs

if __name__=="__main__":
    a, m, rs = map(int,input().split())
    print(balanceFruits(a,m,rs))