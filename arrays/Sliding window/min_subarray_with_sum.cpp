#include<iostream>
#include<climits>
using namespace std;

int minSubarrayLen(int target, int nums[],int n){
    int min_length=INT_MAX;
    int sum=0;
    int left=0;

    for(int right=0;right<n;right++){
        sum+=nums[right];
        while(sum>=target){
            min_length=min(min_length,(right-left+1));
            sum-=nums[left];
            left++;
        }
    }
    if(min_length==INT_MAX){
        return 0;
    }

    return min_length;
}

int main(){
    int nums[]={2,3,1,2,4,3};
    int n=sizeof(nums)/sizeof(nums[0]);
    int target=7;
    cout<<"Minimum subarray length with sum greater than or equal to target is:"<<minSubarrayLen(target,nums,n);
}