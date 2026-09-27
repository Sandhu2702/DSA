# n=int(input("Enter number of cuts: "))
# num_of_pieces=1+((n*(n+1))//2);
# print("Number of pieces will be: ",num_of_pieces%1000000007);

def max_pieces(N):
    MOD=1000000007
    pieces=(N*(N+1))//2 + 1
    return pieces%MOD

N=int(input("Enter N: "))
print("Max_Cake_Pieces: ",max_pieces(N))