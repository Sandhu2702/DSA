#include<iostream>
#include<vector>
using namespace std;

int second_largest(vector<int> &a){
    int n=a.size();
    int largest=a[0];
    int sec_largest=-1;
    for(int i=0;i<n;i++){
        if(a[i]>largest){
            sec_largest=largest;
            largest=a[i];
        }
    }
    return sec_largest;
}

int main(){
    vector<int>a;
    a.push_back(1);
    a.push_back(8);
    a.push_back(4);
    a.push_back(2);
    a.push_back(0);
    a.push_back(10);
    a.push_back(7);
    cout<<second_largest(a);
}