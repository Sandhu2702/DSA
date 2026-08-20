#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    // int pro[n];
    // int product=1;
    // int product2=1;
    // int noz=0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]==0) noz++;
    //     product*=arr[i];
    //     if(arr[i]!=0) product2*=arr[i];
    // }
    // if(noz>1){
    //     product2=0;
    // }
    // for(int i=0;i<n;i++){
    //     if(arr[i]==0) pro[i]=product2;
    //     else pro[i]=product/arr[i];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<pro[i]<<" ";
    // }
    int prep[n];
    prep[0]=1;
    for(int i=1;i<n;i++){
        prep[i]=prep[i-1]*arr[i-1];
    }
    for(int i=0;i<n;i++){
        cout<<prep[i]<<" ";
    }
    cout<<endl;
    int sufp[n];
    sufp[n-1]=1;
    for(int i=n-2;i>=0;i--){
        sufp[i]=sufp[i+1]*arr[i+1];
    }
    for(int i=0;i<n;i++){
        cout<<sufp[i]<<" ";
    }
    cout<<endl;
    int ans[n];
    for(int i=0;i<n;i++){
        ans[i]=prep[i]*sufp[i];
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
