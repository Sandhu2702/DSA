def minCostToVowel(str):
    vowels=['a','e','i','o','u']
    minCost=float('inf')
    for target in vowels:
        cost=0
        for ch in str:
            if ch==target:
                continue
            elif ch in vowels:
                cost+= abs(ord(ch)-ord(target))
            else:
                cost+=10
        minCost = min(minCost,cost)

    if minCost==0:
        return -1
    else:
        return minCost

str = input("Enter any string: ")
print("Minimum cost to change in vowel: ",minCostToVowel(str))
