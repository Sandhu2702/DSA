#include<iostream>
using namespace std;

int sumOfRemainder(int n, int div){
    if(div<=0) return 1;
    int sum=0;
    for(int i=1;i<n+1;i++){
        sum+=(i%div);
    }

    return sum;
}

int main(){
    int n=12;
    int div=4;
    cout<<"Sum of remainders of all elements after divided by div: "<<sumOfRemainder(n,div);
}