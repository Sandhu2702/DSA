# def replaceZeroByOne(n):
#     s=str(n)
#     result=""

#     for digit in s:
#         if digit=='0':
#             result+='1'
#         else:
#             result+=digit

#     result = int(result)

#     return result

def replaceZeroByOne(n):
    result=""

    while n>0:
        digit = n%10
        if digit == 0:
            digit = 1

        result+=str(digit)
        n//=10

    result=result[::-1]

    return int(result)

if __name__=="__main__":
    n=int(input("enter n: "))
    print(replaceZeroByOne(n))