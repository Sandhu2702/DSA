# Find the nearest smaller element on the right for each array element.

def nearestSmallerNumber(arr):
    n=len(arr)
    if n==0:
        return None

    result=[-1]*n

    for i in range(n):
        for j in range(i+1,n):
            if arr[j]<arr[i]:
                result[i]=arr[j]
                break
        
    return result

n=int(input("Enter size of array: "))
a=list(map(int,input("Enter array elements: ").split()))
if len(a)!=n:
    print("Size mismatch")
else:
    result=nearestSmallerNumber(a)
    print(result)



