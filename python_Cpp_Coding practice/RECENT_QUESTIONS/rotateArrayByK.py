def rotateArrayByK(arr,k):
    n=len(arr)
    k=k%n
    m=n-k
    def reverse(start,end):
        while start<end:
            arr[start],arr[end] = arr[end], arr[start]
            start+=1
            end-=1

    #reverse the last k elements
    reverse(m,n-1)

    #reverse the first n-k elements
    reverse(0,m-1)

    #reverse the entite array
    reverse(0,n-1)

# --- Example Usage ---
nums = [1, 2, 3, 4, 5, 6, 7]
k = 3
rotateArrayByK(nums, k)
print(nums)

