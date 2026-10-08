def palindrome_check(s):
    n=len(s)
    l=0
    r=n-1

    while l<r :
        if s[r]!=s[l]:
            return False
            break
        l+=1
        r-=1
    return True

s=input("enter any string: ")
print(palindrome_check(s))