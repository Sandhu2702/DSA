def checkPalindrome(s,left,right):
    if left>=right:
        return True

    if s[left]!=s[right]:
        return False

    return checkPalindrome(s,left+1,right-1)


if __name__=="__main__":
    s=input("enter any string: ")
    print(checkPalindrome(s,0,len(s)-1))