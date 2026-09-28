# Calculate the total number of cards required to build an n-level pyramid.

def CardsPyramid(n):
    cards=0
    for i in range(1, n+1):
        cards+=(2*i)+(i-1)

    return cards%1000007

if __name__=="__main__":
    n=int(input("Enter total levels u want: "))
    print("Total cards required to make this ",n,"level pyramid are: ",CardsPyramid(n))