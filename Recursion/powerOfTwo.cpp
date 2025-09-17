#include<iostream>
using namespace std;
bool isPowerOfTwo(int n){
    if(n==1) return true;
    if(n%2==0) isPowerOfTwo(n/2);
    else return false;
}
int main(){
    int n;
    cout<<"Enter any positive integer:";
    cin>>n;
    bool flag=isPowerOfTwo(n);
    cout<<flag;
}