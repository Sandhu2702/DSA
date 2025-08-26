#include<iostream>
#include<stack>
using namespace std;
int pr(char c){
    if(c=='+' ||c=='-') return 1;
    if(c=='*' ||c=='/') return 2;
    return 0;
}
int operation(int left,int right, char oper){
    if(oper=='+') return left+right;
    if(oper=='-') return left-right;
    if(oper=='*') return left*right;
    if(oper=='/') return left/right;
}
int main(){
    string s="(7+9)*4/8-3";
    stack<int> nums;
    stack<char> op;
    for(int i=0;i<s.length();i++){
        if(s[i]>=48 && s[i]<=57){
            nums.push(s[i]-48);
        }
        else if(s[i]=='(') op.push(s[i]);
        // else if(op.top()=='(') op.push(s[i]);
        else if(s[i]==')'){
            while(op.top()!='('){
                int right=nums.top(); 
                nums.pop();
                int left=nums.top(); 
                nums.pop();
                char oper=op.top(); 
                op.pop();
                int ans=operation(left,right,oper);
                nums.push(ans);
            }
                op.pop(); //pop the opening bracket
           }
        else{
            if(op.empty()) op.push(s[i]);
            else if(pr(s[i])>pr(op.top())) op.push(s[i]);
            else{
                while(!op.empty() && pr(s[i])<=pr(op.top())){
                    int right=nums.top(); 
                    nums.pop();
                    int left=nums.top(); 
                    nums.pop();
                    char oper=op.top(); 
                    op.pop();
                    int ans=operation(left,right,oper);
                    nums.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
        //operator stack can have value
    while(!op.empty()){
        int right=nums.top(); 
        nums.pop();
        int left=nums.top(); 
        nums.pop();
        char oper=op.top(); 
        op.pop();
        int ans=operation(left,right,oper);
        nums.push(ans);
    }
        cout<<"Answer:"<<nums.top()<<endl;
        cout<<"Expected:"<<((7+9)*4/8-3)<<endl;
}