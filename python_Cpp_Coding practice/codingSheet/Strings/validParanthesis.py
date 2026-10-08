def isValid(s):
    while "()" in s or "[]" in s or "{}" in s:
        if "()" in s:
            s=s.replace("()","",1)
        if "[]" in s:
            s=s.replace("[]","",1)
        if "{}" in s:
            s=s.replace("{}","",1)
    return s==""

s=input("enter string: ")
print(isValid(s))