# Assign unique numbers to opening brackets and the same numbers to their matching closing brackets.

def bracketNumbers(s):
    ans=[]
    stack=[]
    count=0

    for ch in s:
        if ch == '(':
            count+=1
            stack.append(count)
            ans.append(count)
        elif ch==')':
            ans.append(stack.pop())

    return ans


s=input("enter a string: ")
print("bracket Numbers:", bracketNumbers(s))