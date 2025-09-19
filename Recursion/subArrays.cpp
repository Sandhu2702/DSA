#include<iostream>
#include<vector>
using namespace std;
void subArrays(vector<int> v, int arr[],int n,int idx){
    if(idx==n){
        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
        cout<<endl;
        return;
    }
    subArrays(v,arr,n,idx+1);
    if(v.size()==0 || arr[idx-1]==v[v.size()-1]){
        v.push_back(arr[idx]);
        subArrays(v,arr,n,idx+1);
    }
}
int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    //1 12 123 1234
    // for(int i=0;i<n;i++){//start of subarray
    //     for(int j=i;j<n;j++){
    //         for(int k=i;k<=j;k++){
    //             cout<<arr[k];
    //         }
    //         cout<<endl;
    //     }
    // }
    vector<int> v;
    subArrays(v,arr,n,0);
}