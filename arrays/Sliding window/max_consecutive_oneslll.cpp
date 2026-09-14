#include<iostream>
using namespace std;
int main(){
    int nums[]={1,1,1,0,0,0,1,1,1,1,0};
    int n=sizeof(nums)/sizeof(nums[0]);
    int k=2;

    //Bruteforce approach------------
    // int i=0;
    // int j=0;
    // int maxCount=0;
    // for(int i=0;i<n;i++){
    //     int countZero=0;
    //     for(int j=i;j<n;j++){
    //         if(nums[j]==0){
    //             countZero++;
    //         }
    //         if(countZero>k){
    //             break;
    //         }
    //         maxCount=max(maxCount,j-i+1);
    //     }
    // }

    // cout<<"maxLength will be:"<<maxCount;


   //Sliding window--------------
   int left=0;
   int maxAns=0,zeroCount=0;
   for(int r=0;r<n;r++){

    if(nums[r]==0){
        zeroCount++;
    }
    if(zeroCount>k){
        if(nums[left]==0){
            zeroCount--;
        }
        left++;
    }
   }

   cout<<n-left;
}