#include<iostream>
using namespace std;
int numberOfWays(int n){
    if(n<0)return 0;
    if(n==0) return 1;
    int totalways=numberOfWays(n-1)+numberOfWays(n-2)+numberOfWays(n-3);
    return totalways;
}
int main(){
    cout<<"Number of ways to climb n stairs i person can take exactly 1,2 or 3 steps: "<<numberOfWays(10);
}