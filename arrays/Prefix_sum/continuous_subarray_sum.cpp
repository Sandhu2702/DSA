#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


//1st method---------------------------bruteforce
// bool continuousSubarraySum(vector<int>nums, int k){
//     int n=nums.size();
//     for(int i=0;i<n-1;i++){
//         int sum=nums[i];
//         for(int j=i+1;j<n;j++){
//             sum+=nums[j];
//             if(sum%k==0){
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// int main(){
//     vector<int>v={23,2,4,6,7};
//     int k=6;
//     bool ans = continuousSubarraySum(v,k);
//     cout<<ans;
// }

//2nd method--------------------------prefixSum+Hashmap
bool continuousSubarraySum(vector<int>nums, int k){
    int n=nums.size();
    unordered_map<int,int>m;
    m[0]=-1;
    int prefixSum=0;
    for(int i=0;i<n;i++){
        prefixSum+=nums[i];
        int rem=prefixSum%k;
        if(m.find(rem)!=m.end()){
            if(i-m[rem]>=2){
                return true;
            }
        }
    }
    return false;
}

int main(){
    vector<int>v={23,2,4,6,7};
    int k=6;
    bool ans = continuousSubarraySum(v,k);
    cout<<ans;
}