#include<iostream>
using namespace std;

// int sumOfBinaryDigits(int n){
//     int sum=0;
//     while(n>0){
//         sum+=(n & 1);// add 1 if last digit is one
//         n>>=1;
//     }
//     return sum;
// }

//2nd method
int sumOfBinaryDigits(int n){
    int count=0;
    while(n>0){
        count+=n%2;
        n=n/2;
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    cout<<"Sum of binary digits of this number is: "<<sumOfBinaryDigits(n);
}
