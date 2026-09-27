#include<iostream>
#include<climits>
using namespace std;

int FindLargestPairSum(int* arr, int n){
    int firstMax=INT_MIN, secondMax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>firstMax){
            secondMax=firstMax;
            firstMax=arr[i];
        }
        else if(arr[i]>secondMax){
            secondMax=arr[i];
        }
    }
    return firstMax+secondMax;
}

int main(){
    int n;
    cout<<"Number of elements in array: ";
    cin>>n;
    int* arr =new int[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Largest Pair Sum: "<<FindLargestPairSum(arr,n)<<endl;
    delete[] arr;
    return 0;
}
