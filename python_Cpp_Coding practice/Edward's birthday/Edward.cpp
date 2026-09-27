#include<iostream>
#include<climits>
using namespace std;

const int MOD = 1000000007;
int maxPieces(int N){
    long long n=N;
    long long pieces = (n*(n+1)/2)+1;
    return pieces%MOD;
}

int main(){
    int N;
    cout<<"Enter number of cuts: ";
    cin>>N;
    cout<<maxPieces(N)<<endl;
    
}