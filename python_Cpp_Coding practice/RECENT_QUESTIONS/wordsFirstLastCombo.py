## Find the most frequent first-and-last character combinations of all words while preserving their original order.

def findCombo(s):
    words=s.split()
    freq={}
    order=[]

    for word in words:
        combo=word[0]+word[-1]

        if combo not in freq:
            freq[combo]=0
            order.append(combo)

        freq[combo]+=1

    max_freq=max(freq.values())

    result=[]
    for combo in order:
        if freq[combo]==max_freq:
            result.append(combo)

    return result

if __name__ == "__main__":
    s=input("Enter any string: ")
    print(findCombo(s))
