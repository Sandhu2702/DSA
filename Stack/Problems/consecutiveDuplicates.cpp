#include<iostream>
#include<stack>
#include <algorithm>
using namespace std;
void removeConsecutiveDuplicates(string s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(st.empty()|| st.top()!=s[i]){
            st.push(s[i]);
        }
    }
    s="";
    while(!st.empty()){
        s=st.top()+s;
        st.pop();
    }
    cout<<s<<endl;
}
int main(){
    string s="aaabbcddaabffg";
    cout<<s<<endl;
    removeConsecutiveDuplicates(s);
}