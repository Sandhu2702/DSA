#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

// int f(int idx,vector<int>&a,int k){
//     if(idx==0) return 0;
//     int minSteps=INT_MAX;
//     for(int j=1;j<=k;j++){
//         if(idx-j>=0){
//             int jump_energy=f(idx-j,a,k)+abs(a[idx]-a[idx-j]);
//             minSteps=min(minSteps,jump_energy);
//         }
//     }
//     return minSteps;
// }

// int main(){
//     vector<int> a = {10, 20, 30, 10};
//     int n = a.size();

//     cout << f(n - 1, a,2);
// }

//Memoization
// int f(int idx,vector<int>&a,int k, vector<int>&dp){
//     if(idx==0) return 0;
//     if(dp[idx]!=-1) return dp[idx];
//     int minSteps=INT_MAX;
//     for(int j=1;j<=k;j++){
//         if(idx-j>=0){
//             int jump_energy=f(idx-j,a,k,dp)+abs(a[idx]-a[idx-j]);
//             minSteps=min(minSteps,jump_energy);
//         }
//     }
//     return dp[idx]=minSteps;

// }

// int main(){
//     vector<int> a = {10, 20, 30, 10};
//     int n = a.size();

//     vector<int>dp(n+1,-1);
//     cout << f(n - 1, a,2,dp);
// }

//Tabulation
int main(){
    vector<int> a = {10, 20, 30, 10};
    int n = a.size();
    vector<int>dp(n,0);
    dp[0]=0;
    int k=2;
    // int prev=0;
    // int prev2=0;
    // int curi=0;
    for(int i=1;i<n;i++){
        int minSteps=INT_MAX;
        for(int j=1;j<=k;j++){
            if(i-j>=0){
                int jump=dp[i-j]+abs(a[i]-a[i-j]);
                minSteps=min(minSteps,jump);
            }
        }
        dp[i]=minSteps;
    }
    cout << dp[n-1];
}