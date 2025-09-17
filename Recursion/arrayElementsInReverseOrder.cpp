#include<iostream>
using namespace std;
void elementsInReverseOrder(int arr[],int n){
    if(n<0) return;
    cout<<arr[n]<<" ";
    elementsInReverseOrder(arr,n-1);
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    elementsInReverseOrder(arr,n-1);
}