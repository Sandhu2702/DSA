#include<iostream>
#include<set>
#include<map>
using namespace std;

int main(){
    // set<int>s;
    // s.insert(1);
    // s.insert(6);
    // s.insert(3);
    // s.insert(9);
    // s.insert(5);
    // for( int el:s){
    //     cout<<el<<" ";
    // }

    map<string,int>m;
    m["2"]=20;
    m["3"]=10;
    m["1"]=30;
    for(auto x:m){
        cout<<x.second<<" ";
    }

}
