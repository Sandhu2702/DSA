# def sumOddIntegers(list,n):
#     sum=0
#     for i in range(n):
#         if list[i]%2!=0:
#             sum+=list[i]
#     return sum

# list=[3,2,1,8,0,-4,-2,-1,19]
# print("Sum of all odd integers: ",sumOddIntegers(list,len(list)))

def sum_odd_integers(arr):
    return sum(x for x in arr if x%2!=0)

#read input
arr=list(map(int, input().split()))
print(sum_odd_integers(arr))