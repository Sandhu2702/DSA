# Convert the string into an n×n matrix and count rows and columns containing the same character.

from math import sqrt

def stringToMatrix(s):
    n=int(sqrt(len(s)))
    matrix=[]
    for i in range(n):
        row=[]

        for j in range(n):
            row.append(s[i*n+j])

        matrix.append(row)

    count = 0

    for i in range(n):
        same=True

        for j in range(n):
            if matrix[i][j]!=matrix[i][0]:
                same=False
                break

        if same:
            count+=1

    for i in range(n):
        same=True

        for j in range(n):
            if matrix[j][i]!=matrix[0][j]:
                same=False
                break

        if same:
            count+=1
    
    return count

str="aaabbbccc"
print(stringToMatrix(str))
