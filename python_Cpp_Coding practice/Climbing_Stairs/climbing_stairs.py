N=int(input("Enter total stairs: "))
M=int(input("No of stairs allowed at a time: "))

#1st approach---direct formula
# print("Total required steps to reach at the top : ",(N//M + N%M))

#2nd approach
min_moves = float('inf')
b=0

while b*M<=N:
    a=N-b*M
    total = a+b
    min_moves=min(min_moves,total)
    b+=1
print(min_moves)