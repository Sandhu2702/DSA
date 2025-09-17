#include<iostream>
using namespace std;
void pip(int n){
    if(n==0) return;
    pip(n-1);
    cout<<"In "<<n<<endl;
    pip(n-1);
    cout<<"Post "<<n<<endl;
}
int main(){
    pip(2);
}