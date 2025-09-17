#include<iostream>
using namespace std;
int indexOfElement(int arr[],int n,int target){
    if(n<0) return -1;
    if(arr[n]==target) return n;
    return indexOfElement(arr,n-1,target);
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int target;
    cout<<"Enter target value: ";
    cin>>target;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<indexOfElement(arr,n-1, target);
}