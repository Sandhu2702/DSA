#include<iostream>
using namespace std;
int mySqrt(int x){
    int lo=0;
    int hi=x;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        long long m=(long long)mid;
        long long y=(long long)x;
        if(m*m==y) return m;
        if(m*m>y) hi=mid-1;
        if(m*m<y) lo=mid+1;
    }
    return hi;
}
int main(){
    int n;
    cout<<"Enter n";
    cin>>n;
    cout<<"Square root of "<<n<<" : "<<mySqrt(n);
}