def reverseString(s):
    if s is None:
        return None

    s=list(s)
    left=0
    right=len(s)-1

    while left<right:
        if not s[left].isalpha():
            left+=1
        elif not s[right].isalpha():
            right+=1
        else:
            s[left],s[right]=s[right],s[left]
            left+=1
            right-=1
    return ''.join(s)

if __name__=="__main__":
    s="a^b$sc"
    r=reverseString(s)
    print(r)

