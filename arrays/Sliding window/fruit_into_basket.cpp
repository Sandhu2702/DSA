#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int fruits[]={1,2,3,2,2};
    int n=sizeof(fruits)/sizeof(fruits[0]);
    int ans=0;
    for(int l=0;l<n;l++){
        unordered_map<int,int>m;
        int count=0;
        for(int r=l;r<n;r++){
            m[fruits[r]]++;
            if(m.size()>2){
                break;
            }
            count++;
        }
        ans=max(ans,count);
    }
    cout<<ans;
}