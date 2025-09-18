#include<iostream>
#include<vector>
using namespace std;
// void subset(string s,string str){
//     if(str.length()==0){
//         cout<<s<<" ";
//         return;
//     }
//     subset(s,str.substr(1));
//     subset(s+str[0],str.substr(1));
// }
void subset(string s,string str,int idx){
    if(idx==str.length()){
        cout<<s<<" ";
        return;
    }
    subset(s,str,idx+1);
    subset(s+str[idx],str,idx+1);
}
void storeSubset(string s,string str,vector<string>& v){
    if(str.length()==0){
        v.push_back(s);
        return;
    }
    storeSubset(s,str.substr(1),v);
    storeSubset(s+str[0],str.substr(1),v);
}
int main(){
    string str="abc";
    subset("",str,0);
    cout<<endl;
    vector<string> v;
    storeSubset("",str,v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}