def maxOddEvenDifference(s):
    n=len(s)
    diff=0
    maxEven=0
    maxOdd=0

    mp={}
    for ch in s:
        mp[ch] = mp.get(ch,0)+1

    for freq in mp.values():
        if freq % 2 == 0:
            maxEven=max(maxEven, freq)

        else:
            maxOdd=max(maxOdd, freq)

    return maxEven-maxOdd

s=input("enter string: ")
maxOddEvenDifference=maxOddEvenDifference(s)
print(maxOddEvenDifference)