#include<iostream>
#include<stack>
using namespace std;
int pr(char c){
    if(c=='+' ||c=='-') return 1;
    if(c=='*' ||c=='/') return 2;
    return 0;
}
string operation(string left,string right, char oper){
    string st="";
    st+=left;
    st+=right;
    st.push_back(oper);
    return st;
}
int main(){
    string s="(7+9)*4/8-3";
    stack<string> val;
    stack<char> op;
    for(int i=0;i<s.length();i++){
        if(s[i]>=48 && s[i]<=57){
            val.push(to_string(s[i]-48));
        }
        else if(s[i]=='(') op.push(s[i]);
        // else if(op.top()=='(') op.push(s[i]);
        else if(s[i]==')'){
            while(op.top()!='('){
                string right=val.top(); 
                val.pop();
                string left=val.top(); 
                val.pop();
                char oper=op.top(); 
                op.pop();
                string ans=operation(left,right,oper);
                val.push(ans);
            }
                op.pop(); //pop the opening bracket
           }
        else{
            if(op.empty()) op.push(s[i]);
            else if(pr(s[i])>pr(op.top())) op.push(s[i]);
            else{
                while(!op.empty() && pr(s[i])<=pr(op.top())){
                string right=val.top(); 
                val.pop();
                string left=val.top(); 
                val.pop();
                char oper=op.top(); 
                op.pop();
                string ans=operation(left,right,oper);
                val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
        //operator stack can have value
    while(!op.empty()){
        string right=val.top(); 
        val.pop();
        string left=val.top(); 
        val.pop();
        char oper=op.top(); 
        op.pop();
        string ans=operation(left,right,oper);
        val.push(ans);
    }
        cout<<"Infix:"<<s<<endl;
        cout<<"Prefix:"<<val.top()<<endl;
        
}