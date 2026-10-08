def longestsubstr(s):
    n=len(s)
    l=0
    seen=set()
    max_len=0
    for r in range(n):
        while s[r] in seen:
            seen.remove(s[l])
            l+=1

        seen.add(s[r])

        max_len = max(max_len, r-l+1)

    return max_len

s=input("enter string: ")
print("MaxLength of subtring having unique characters: ",longestsubstr(s))
