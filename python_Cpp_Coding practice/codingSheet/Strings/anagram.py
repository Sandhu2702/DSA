#Anagram of each other

def anagram(s1,s2):
    n1=len(s1)
    n2=len(s2)

    mp1={}
    for el in s1:
        mp1[el]=mp1.get(el,0)+1

    mp2={}
    for el in s2:
        mp2[el]=mp2.get(el,0)+1

    if mp1==mp2:
        return True
    else:
        return False

if __name__=="__main__":
    s1=input("enter 1st string: ")
    s2=input("enter 2nd string: ")
    anagram_check=anagram(s1,s2)
    print(anagram_check)