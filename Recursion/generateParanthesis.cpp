#include<iostream>
#include<vector>
using namespace std;
void generateParanthesis(string s,int o,int c,int n){
    if(c==n){
        cout<<s<<endl;
        return;
    }
    if(o<n){
         generateParanthesis(s+"(",o+1,c,n);
    }
    if(c<o){
         generateParanthesis(s+")",o,c+1,n);
    }
}
int main(){
    int n=3;
    int o=0;
    int c=0;
    generateParanthesis("",o,c,n);
}