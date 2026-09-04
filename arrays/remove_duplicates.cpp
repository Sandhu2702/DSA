#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int main(){
    vector<int>a;
    a.push_back(1);
    a.push_back(1);
    a.push_back(2);
    a.push_back(2);
    a.push_back(2);
    a.push_back(3);
    a.push_back(3);

    //first approach-----------------bruteforce
    // set<int>s;
    // for(int i=0;i<a.size();i++){
    //     s.insert(a[i]);
    // }
    // for(auto x:s){
    //     cout<<x<<" ";
    // }

    //second approach--------------two_pointer
    int i=0;
    for(int j=1;j<a.size();j++){
        if(a[j]!=a[i]){
            a[i+1]=a[j];
            i++;
        }
    }
    cout<<i+1;



    
}