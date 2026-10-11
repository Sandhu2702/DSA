#For each unique character in the string, calculate `(ASCII value × frequency) % 5` and add the non-zero results to a running sum, processing each character only once.
def moduloSum(s):
    freq={}
    for ch in s:
        freq[ch]=freq.get(ch,0)+1

    sum=0
    for el in freq:
        mod_result = (ord(el)*freq[el])%5
        if mod_result!=0:
            sum+=mod_result

    return sum


if __name__=="__main__":
    s=input("Enter any string: ")
    print("Total running sum after multiplying ascii to freq and taking modulo by 5: ",moduloSum(s))