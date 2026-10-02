def isSubset(arr1,arr2):
    for el in arr1:
        if el not in arr2:
            return False

    return True

A = list(map(int,input("Enter first array: ").split()))
B = list(map(int,input("Enter second array: ").split()))

print(isSubset(A,B))