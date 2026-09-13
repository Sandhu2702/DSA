#include<iostream>
using namespace std;
int main(){
    int nums[]={0,1,0,3,12};
    int n=sizeof(nums)/sizeof(nums[0]);
    // int ans[n];
    // int j=0;
    // for(int i=0;i<n;i++){
    //     if(nums[i]!=0){
    //         ans[j]=nums[i];
    //         j++;
    //     }
    // }
    // for(int i=j;i<n;i++){
    //     ans[i]=0;
    // }

    // for(int i=0;i<n;i++){
    //     cout<<ans[i]<<" ";
    // }

    //Two pointer approach
    int left=0;
    int right=0;
    for(int i=0;i<n;i++){
        if(nums[right]==0){
            right++;
        }
        else{
            int temp=nums[left];
            nums[left]=nums[right];
            nums[right]=temp;
            right++;
            left++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}