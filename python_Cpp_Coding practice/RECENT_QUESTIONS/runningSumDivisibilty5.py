#running sum of integers from 1 to n and count if runningSum is divisible by 5

def runningSumDivisibility5(n):
    runningSum=0
    count=0

    for i in range(1, n+1):
        runningSum+=i
        if runningSum%5==0:
            count+=1

    print("RunningSum: ",runningSum)
    print("count: ",count)

if __name__ == "__main__":
    n=int(input("Enter n :"))
    runningSumDivisibility5(n)
    