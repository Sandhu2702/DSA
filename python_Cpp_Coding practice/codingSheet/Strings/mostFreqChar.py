def mostFrequentChar(s):
    n=len(s)
    count=0

    freq={}
    for char in s:
        freq[char]=freq.get(char,0)+1

    ans='z'
    max_freq=0

    for ch in freq:
        if freq[ch]>max_freq:
            max_freq= freq[ch]
            ans=ch
        elif freq[ch]==max_freq and ch<ans:
            ans=ch

    return ans

s=input("enter s string: ")
print("most frequent character: ",mostFrequentChar(s))