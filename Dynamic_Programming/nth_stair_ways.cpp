#include<iostream>
#include<vector>
using namespace std;

int f(int ind, vector<int>&v){
    if(ind==0) return 1;
    if(ind==1) return 1;
    if(v[ind]!=-1) return v[ind];
    return v[ind]=f(ind-1,v)+f(ind-2,v);
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    vector<int>v(n+1,-1);
    cout<<f(n,v);
}
