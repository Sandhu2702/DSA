#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter number of Stairs: ";
    cin>>N;
    int M;
    cout<<"Total number of stairs can be climb together allowed: ";
    cin>>M;
    cout<<"Minimum number of climbs required to reach at the top: "<<(N/M + N%M);
}