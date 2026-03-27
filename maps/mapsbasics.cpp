#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
    map<string,int>m;
    m["Raghav"]=76;
    m["Sandhya"]=10;
    m["Rahul"]=52
    ;
    for(auto ele:m){
        cout<<ele.second<<" ";
    }
}