#include<iostream>
#include<stack>
using namespace std;
void removeConsecutiveDuplicates(string s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(st.empty()|| st.top()!=s[i]){
            st.push(s[i]);
        }
    }
    string result="";
    while(!st.empty()){
        result=st.top()+result;
        st.pop();
    }
    cout<<result<<endl;
}
int main(){
    string s="aaabbcddaabffg";
    cout<<s<<endl;
    removeConsecutiveDuplicates(s);
}