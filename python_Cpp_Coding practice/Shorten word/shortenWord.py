# Return the first character, number of middle characters, and last character.

def shortenWord(s):
    n=len(s)
    return s[0]+str(n-2)+s[n-1]

s="examination"
print("Shorten word will be: ",shortenWord(s))