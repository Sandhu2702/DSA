#include<iostream>
#include<vector>
using namespace std;
bool isSorted(vector<int>a){
    for(int i=1;i<a.size();i++){
        if(a[i]>=a[i-1]){
            
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    vector<int>a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(4);
    a.push_back(5);
    a.push_back(7);
    a.push_back(10);
    a.push_back(14);
    cout<<isSorted(a);
}