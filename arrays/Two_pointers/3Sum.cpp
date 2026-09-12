#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>>threeSum(vector<int>&nums){
    vector<vector<int>>ans;
    int n=nums.size();
    sort(nums.begin(),nums.end());
    for(int i=0;i<n-2;i++){
        if(i>0 && nums[i]==nums[i-1]) continue;

        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            if(sum==0){
                ans.push_back({nums[i],nums[j],nums[k]});
                while(j<k && nums[j]==nums[j+1]) j++;
                while(j<k && nums[k]==nums[k-1]) k--;
                j++;
                k--;
            }
            else if(sum>0){
                k--;
            }
            else{
                j++;
            }
        }
    }
    return ans;
}

int main(){
    vector<int>v;
    v.push_back(-1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(0);
    v.push_back(-1);
    v.push_back(-1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    vector<vector<int>>res=threeSum(v);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res.size();j++){
            cout<<"["<<res[i][j]<<"]";
        }
        cout<<endl;
    }

}
