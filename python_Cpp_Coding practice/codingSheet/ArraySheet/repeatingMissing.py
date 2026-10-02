def findMissingRepeating(arr):
    n=len(arr)
    freq=[0]*(n+1)

    for el in arr:
        freq[el]+=1

    repeating =-1
    missing =-1

    for i in range(1,n+1):
        if freq[i]==2:
            repeating=i
        elif freq[i]==0:
            missing=i

    return [repeating,missing]

arr = list(map(int,input("enter elements: ").split()))
print("Repeating and missing: ",findMissingRepeating(arr))
