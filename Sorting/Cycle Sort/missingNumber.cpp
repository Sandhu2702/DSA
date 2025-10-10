#include<iostream>
#include<vector>
using namespace std;
// int missingNumber(vector<int>& nums) {
//     //n=5, 0 to 5 -> 0,1,3,4,5
//     int n=nums.size();
//     int expectedSum=(n*(n+1))/2;
//     int actualSum=0;
//     for(int i=0;i<n;i++){
//        actualSum+=nums[i];
//     }
//     return expectedSum-actualSum;
// }
int missingNumber(vector<int>& nums) {
        //n=5, 0 to 5 -> 0,1,3,4,5
        int n=nums.size();
        int i=0;
        while(i<n){
            int correctIdx=nums[i];
            if(correctIdx==i || nums[i]==n) i++;
            else swap(nums[i], nums[correctIdx]);
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=i) return i;
        }
        return n;
 }
int main(){
    int arr[]={9,6,4,2,3,5,7,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    cout<<missingNumber(v);
    
}