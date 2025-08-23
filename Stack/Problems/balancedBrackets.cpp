#include<iostream>
#include<stack>
using namespace std;
bool isBalanced(string s){
    if(s.length()%2!=0) return false;
    stack<string> st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            st.push("(");
        }else{
            if(st.empty()) return false;
            st.pop();
        }
    
    }
    if(st.empty()) return true;
    else return false;
}
int main(){
    string s1="()()()";
    string s2="()())()";
    cout<<isBalanced(s1)<<endl;
    cout<<isBalanced(s2)<<endl;
}