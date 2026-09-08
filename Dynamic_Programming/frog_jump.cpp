#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

// int f(int idx,vector<int>&a){
//     if(idx==0) return 0;
//     int left = f(idx-1,a)+abs(a[idx]-a[idx-1]);
//     int right=INT_MAX ;
//     if(idx>1){
//         right = f(idx-2,a)+abs(a[idx]-a[idx-2]);
//     }
//     return min(left,right);

// }

// int main(){
//     vector<int> a = {10, 20, 30, 10};
//     int n = a.size();

//     cout << f(n - 1, a);
// }

//Memoization
// int f(int idx,vector<int>&a, vector<int>&dp){
//     if(idx==0) return 0;
//     if(dp[idx]!=-1) return dp[idx];
//     int left = f(idx-1,a,dp)+abs(a[idx]-a[idx-1]);
//     int right=INT_MAX ;
//     if(idx>1){
//         right = f(idx-2,a,dp)+abs(a[idx]-a[idx-2]);
//     }
//     return dp[idx]=min(left,right);

// }

// int main(){
//     vector<int> a = {10, 20, 30, 10};
//     int n = a.size();

//     vector<int>dp(n+1,-1);
//     cout << f(n - 1, a,dp);
// }

//Tabulation
int main(){
    vector<int> a = {10, 20, 30, 10};
    int n = a.size();
    vector<int>dp(n+1,-1);
    dp[0]=0;
    int prev=0;
    int prev2=0;
    int curi=0;
    for(int i=1;i<n;i++){
        int fs= prev+abs(a[i]-a[i-1]);
        int ss=INT_MAX;
        if(i>1){
            ss=prev2+abs(a[i]-a[i-2]);
        }
        curi=min(fs,ss);
        prev2=prev;
        prev=curi;
    }
    cout << prev;
}