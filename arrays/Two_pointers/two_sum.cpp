#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    int arr[]={2,7,11,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=9;
    vector<int>ans;
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        int rem=target-arr[i];
        if(m.find(rem)!=m.end()){
            cout<<"["<<m[rem]<<","<<i<<"]";
        }
        else{
            m[arr[i]]=i;
        }
    }
    // int left=0;
    // int right=n-1;
    // int k=9;
    // int sum=0;
    // while(left<right){
    //     sum=arr[left]+arr[right];
    //     if(sum==k){
    //         cout<<left<<","<<right;
    //         break;
    //     }
    //     else if(sum>9){
    //         right--;
    //     }
    //     else{
    //         left++;
    //     }
    // }
    
}