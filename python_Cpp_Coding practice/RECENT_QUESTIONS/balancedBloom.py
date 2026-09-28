# Find and sum elements whose smaller and greater counts are equal and occur at most twice.

def balancedBloom(arr):
    n=len(arr)
    count=0
    for el in arr:
        smaller=0
        greater=0
        same=0
        for x in arr:
            if x<el:
                smaller+=1
            elif x>el:
                greater+=1
            else:
                same+=1
        
        if smaller==greater and same<=2:
            count+=el

    return count

arr = [1, 2, 3]
print(balancedBloom(arr))
