#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={1,4,2,10,23,3,1,0,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;

    // int max_sum=0;
    //first method--bruteforce
    // for(int i=0;i<n-k;i++){
    //     int sum=0;
    //     for(int j=i;j<k+i;j++){
    //         sum+=arr[j];
    //     }
    //     max_sum = max(max_sum,sum);
    // }
    // cout<<max_sum;

    //2nd method-------sliding window
    int windowSum=0;
    int max_sum=windowSum;
    for(int i=0;i<k;i++){
        windowSum+=arr[i];
    }
    for(int j=k;j<n;j++){
        windowSum+=arr[j];
        windowSum-=arr[j-k];

        max_sum=max(max_sum,windowSum);
    }

    cout<<max_sum;

}