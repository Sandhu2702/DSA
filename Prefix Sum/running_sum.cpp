#include<iostream>
#include<vector>
using namespace std;

vector<int>runningSum(vector<int>&nums){
    int n=nums.size();
    vector<int>run(n);
    run[0]=nums[0];
    for(int i=1;i<n;i++){
        run[i]=run[i-1]+nums[i];
    }
    return run;
}

int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    vector<int>ans=runningSum(v);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}