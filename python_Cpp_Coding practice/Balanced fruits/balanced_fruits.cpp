// Balance apples and mangoes by adjusting the available rupees.

#include<iostream>
using namespace std;

int BalanceFruits(int a, int m, int rs){
    if(a>m){
        rs-=(a-m);
    }
    if(m>a){
        rs+=(m-a);
    }
    return rs;
}

int main(){
    int a, m, rs; 
    cout << "Enter apples, mangoes, rupees: "; 
    cin >> a >> m >> rs; 
    cout << "Output:\n" << BalanceFruits(a, m, rs) << endl; 
    return 0;
}