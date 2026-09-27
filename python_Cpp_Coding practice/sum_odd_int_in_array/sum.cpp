#include<iostream>
using namespace std;

int SumOddIntegers(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            sum+=arr[i];
        }
    }
    return sum;
}

int main(){
    int arr[]={3,2,1,8,0,-4,-2,-1,19};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Sum of all odd integers in array is: "<<SumOddIntegers(arr,n);
}