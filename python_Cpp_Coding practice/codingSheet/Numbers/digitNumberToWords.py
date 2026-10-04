def digitNumberToWords(n):
    words=["zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"]
    result=""

    if n == 0:
        return "Zero"
    
    while n>0:
        digit=n%10
        result = words[digit]+" "+result
        n//=10

    return result

n=int(input("enter number: "))
print(digitNumberToWords(n))