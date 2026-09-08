#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int f(int idx,vector<int>&a){
    if(idx==0) return 0;
    int left = f(idx-1,a)+abs(a[idx]-a[idx-1]);
    int right=INT_MAX ;
    if(idx>1){
        right = f(idx-2,a)+abs(a[idx]-a[idx-2]);
    }
    return min(left,right);

}

int main(){
    vector<int> a = {10, 20, 30, 10};
    int n = a.size();

    cout << f(n - 1, a);
}