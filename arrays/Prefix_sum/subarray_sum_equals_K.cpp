#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int nums[]={1,-1,0,1,2,-1,3};
    int n=sizeof(nums)/sizeof(nums[0]);
    int k=3;
    int count=0;
    unordered_map<int,int>m;
    m[0]=1;
    int prefix_sum=0;
    for(int i=0;i<n;i++){
        prefix_sum+=nums[i];
        int target=prefix_sum-k;
        if(m.find(target)!=m.end()){
            count+=m[target];
        }
        m[prefix_sum]++;
    }
    cout<<count;
}