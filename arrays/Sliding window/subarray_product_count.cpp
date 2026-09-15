#include<iostream>
using namespace std;
int main(){
    int nums[]={10,5,2,6};
    int k=100;
    int n=sizeof(nums)/sizeof(nums[0]);
    int product=1;
    int count=0;
    int left=0;
    for(int right=0;right<n;right++){
        product*=nums[right];
        while(product>=k){
            product/=nums[left];
            left++;
        }
        count+=(right-left+1);
    }
    if(k<=1){
        cout<<"Total subarrays whose product is less than k are:0";
    }else{
        cout<<"Total subarrays whose product is less than k are:"<<count;
    }

}