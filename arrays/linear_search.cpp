#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int search(int x, vector<int>v){
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            return i;
            break;
        }
    }
    return -1;
}

int main(){
    vector<int>v;
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(4);
    v.push_back(1);
    int num;
    cout<<"Enter num: ";
    cin>>num;
    cout<<search(num,v);
}