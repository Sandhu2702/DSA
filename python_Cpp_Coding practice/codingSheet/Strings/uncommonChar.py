def uncommonCharacters(s1,s2):
    set1=set(s1)
    set2=set(s2)

    result=set1^set2

    return "".join(sorted(result))

s1=input("Enter 1st string: ")
s2=input("enter 2nd string: ")

print("Uncommon character: ",uncommonCharacters(s1,s2))