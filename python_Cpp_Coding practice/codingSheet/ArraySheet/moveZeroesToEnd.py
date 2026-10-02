def moveZeroesToEnd(arr):
    n=len(arr)
    left=0
    for i in range(n):
        if arr[i]!=0:
            arr[left],arr[i]=arr[i],arr[left]
            left+=1

    return arr

arr=list(map(int,input("Enter elements: ").split()))
print(moveZeroesToEnd(arr))