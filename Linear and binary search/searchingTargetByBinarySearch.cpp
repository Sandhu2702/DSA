#include<iostream>
using namespace std;
int search(int arr[],int n,int target){
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]>target) hi=mid-1;
        else lo=mid+1;
    }
    return -1;
}
int main(){
    int arr[]={1,2,5,7,3,87,52,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<search(arr,n,87);
    
}