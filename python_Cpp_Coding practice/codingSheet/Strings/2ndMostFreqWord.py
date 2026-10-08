def secondMostFreq(arr):
    if not arr:
        return -1
    
    freq={}

    for word in arr:
        freq[word]=freq.get(word,0)+1

    if len(freq)==1:
        return -1

    frequencies = list(freq.values())
    frequencies = list(set(frequencies))

    if len(frequencies)==1:
        return -1

    frequencies.sort(reverse=True)

    return frequencies[1]

arr=input("enter words separated by space: ").split()
print("Second hight frequency : ",secondMostFreq(arr))