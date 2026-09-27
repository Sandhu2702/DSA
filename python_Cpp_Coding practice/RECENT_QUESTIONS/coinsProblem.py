#Count and return the total number of integers in the range [1,n] whose squre ends with d

def squareLastDigitMatch(n,d):
    count=0
    for i in range(1,n+1):
        sq=i*i
        if sq%10==d:
            count+=1
    return count 


n=7
d=9
print("Matching count: ",squareLastDigitMatch(n,d))
