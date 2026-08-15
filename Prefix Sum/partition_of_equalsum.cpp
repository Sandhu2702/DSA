#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int pre[n];
    pre[0]=arr[0];
    for(int i=1;i<n;i++){
        pre[i]=pre[i-1]+arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<pre[i]<<" ";
    }
    cout<<endl;
    // int x;
    // pre[x]=pre[x+1-1]+pre[n-1];
    // pre[x]=pre[n-1]/2;
    for(int i=0;i<n;i++){
        if(pre[i]==pre[n-1]/2){
            cout<<i<<" ";
        }
    }

}