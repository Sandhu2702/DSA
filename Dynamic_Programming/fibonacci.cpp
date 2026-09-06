#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
//Memoization--------------------->
// int fibo(int n, int dp[]){
//     if(n<=1) return n;
//     if(dp[n]!=-1) return dp[n];
//     return dp[n]=fibo(n-1,dp)+fibo(n-2,dp);
// }

// int main(){
//     int n=5;
//     int dp[n+1];
//     memset(dp, -1, sizeof(dp));
//     int fibonacci=fibo(n,dp);
//     cout<<fibonacci;
// }

//using vector
// int fibo(int n, vector<int>&dp){
//     if(n<=1) return n;
//     if(dp[n]!=-1) return dp[n];
//     return dp[n]=fibo(n-1,dp)+fibo(n-2,dp);
// }

// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     vector<int> dp(n+1,-1);
//     int fibonacci=fibo(n,dp);
//     cout<<fibonacci;
// }


//Tabulation---------->
int fibo(int n){
    int prev2=0;
    int prev=1;
    int curr;
    for(int i=2;i<=n;i++){
        curr=prev+prev2;
        prev2=prev;
        prev=curr;
    }
    return prev;
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int fibonacci=fibo(n);
    cout<<fibonacci;
}