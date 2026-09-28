// Calculate the total number of cards required to build an n-level pyramid.

#include<iostream>
using namespace std;

int CardsPyramid(int n){
    int cards=0;
    for(int i=1;i<=n;i++){
        cards+=(2*i)+(i-1);
    }

    return cards % 1000007;
}

int main(){
    int n;
    cout<<"Enter the number of levels u want: ";
    cin>>n;
    cout<<"Total cards required to make this "<<n<<"level pyramid are "<<CardsPyramid(n);
}