def reverseString(s):
    n=len(s)
    s_list=list(s)
    l=0
    r=n-1
    while l<r :
        s_list[l],s_list[r]=s_list[r],s_list[l]
        l+=1
        r-=1

    return "".join(s_list)

if __name__=="__main__":
    s=input("enter a string: ")
    print("Reverse of ",s,"is: ",reverseString(s))