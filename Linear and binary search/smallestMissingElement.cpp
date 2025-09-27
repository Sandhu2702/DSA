#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={0,1,2,3,4,5,8,9,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    int min=INT_MAX;
    // for(int i=0;i<n;i++){
    //     if(i!=arr[i]){
    //         cout<<i<<endl;
    //         break;
    //     }
    // }
    int lo=arr[0];
    int hi=arr[n-1];
    int ans=0;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==mid){
            lo=mid+1;
        }
        else{
            ans=mid;
            hi=mid-1;
        }
    }
    cout<<ans;
}