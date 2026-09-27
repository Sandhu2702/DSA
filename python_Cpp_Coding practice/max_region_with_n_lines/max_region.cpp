#include<iostream>
using namespace std;

int max_regions(int n){
    int regions=(n*(n+1))/2 +1;
    return regions;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Max possible regions with n straight line on a place: "<<max_regions(n);
}