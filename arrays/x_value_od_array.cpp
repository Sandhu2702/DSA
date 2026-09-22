#include<iostream>
#include<vector>
using namespace std;

vector<int> findXValue(vector<int>v,int k){
    vector<int>ans(k,0);
    vector<int>prev(k,0);
    int n=v.size();
    for(int i=0;i<n;i++){
        int mod = v[i]%k;
        vector<int>current(k,0);
        current[mod]++;
        for(int j=0;j<k;j++){
            int newR=(j*mod)%k;
            current[newR]+=prev[j];
        }
        prev=current;
        for(int r=0;r<k;r++){
            ans[r]+=prev[r];
        }
    }
    return ans;
}

int main(){
    vector<int>v={2,1,2};
    vector<int>ans=findXValue(v,3);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}