def reverseWords(s):
    words=s.split(".")
    result=[]

    for word in words:
        if word!="":
            result.append(word)

    result.reverse()

    return ".".join(result)

s=input("Enter string: ")
print("Reversed words string: ",reverseWords(s))