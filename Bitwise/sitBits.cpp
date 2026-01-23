#include<iostream>
using namespace std;

int count_set_bits(int n){
    return __builtin_popcount(n);
}
int main(){
    cout<<count_set_bits(64);
    return 0;
}