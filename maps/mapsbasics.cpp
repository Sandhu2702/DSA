#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    // pair<string, int> p1;
    // p1.first="raghav";
    // p1.second=76;
    // m.insert(p1);
    // pair<string, int> p2;
    // p2.first="harsh";
    // p2.second=15;
    // m.insert(p2);
    // pair<string, int> p3;
    // p3.first="lokesh";
    // p3.second=49;
    // m.insert(p3);
    m["Harsh"]=15;
    m["Raghav"]=20;
    m["Suryansh"]=56;
    for(auto p: m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    m.erase("Raghav");
    for(auto p: m){
        cout<<p.first<<" "<<p.second<<endl;
    }
}