#include<iostream>
using namespace std;
int main(){
    int arr[]={2,7,11,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    int left=0;
    int right=n-1;
    int k=9;
    int sum=0;
    while(left<right){
        sum=arr[left]+arr[right];
        if(sum==k){
            cout<<left<<","<<right;
            break;
        }
        else if(sum>9){
            right--;
        }
        else{
            left++;
        }
    }
}