#from sorted array
# def removeDuplicate(arr):
#     n=len(arr)
#     k=1 #index for unique elements
#     for i in range(1,n):
#         if arr[i]!=arr[i-1]:
#             arr[k]=arr[i]
#             k+=1
#     arr = arr[:k]
#     return arr

# arr=list(map(int,input("Enter elements: ").split()))
# print(removeDuplicate(arr))


#from unsorted array
# def removeDuplicate(arr):
#     n=len(arr)
#     unique=[]

#     for i in range(n):
#         if arr[i] not in unique:
#             unique.append(arr[i])
#     return unique

# def removeDuplicate(arr):
#     n=len(arr)
#     return list(dict.fromkeys(arr))

def removeDuplicate(arr):
    n=len(arr)
    k=0

    for i in range(n):
        duplicate=False
        for j in range(k):
            if arr[i]==arr[j]:
                duplicate=True
                break

        if not duplicate:
            arr[k]=arr[i]
            k+=1
    del arr[k:]
    return arr

arr=list(map(int,input("Enter elements: ").split()))
print(removeDuplicate(arr))