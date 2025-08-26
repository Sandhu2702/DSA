#include<iostream>
#include<stack>
using namespace std;
int pr(char c){
    if(c=='+' ||c=='-') return 1;
    if(c=='*' ||c=='/') return 2;
}
int operation(int left,int right, char oper){
    if(oper=='+') return left+right;
    if(oper=='-') return left-right;
    if(oper=='*') return left*right;
    if(oper=='/') return left/right;
}
int main(){
    string s="7+9*4/8-3";
    stack<int> nums;
    stack<char> op;
    for(int i=0;i<s.length();i++){
        if(s[i]>=48 && s[i]<=57){
            nums.push(s[i]-48);
        }
        if(s[i]=='+'|| s[i]=='-'|| s[i]=='*'|| s[i]=='/'){
            if(op.empty()){
                op.push(s[i]);
            }
            else if(pr(s[i])>pr(op.top())){
                op.push(s[i]);
            }
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
            int val2=nums.top(); nums.pop();
            int val1=nums.top(); nums.pop();
            char oper=op.top(); op.pop();
            int ans=operation(val2,val1,oper);
            nums.push(ans);
        }
        cout<<"Answer:"<<nums.top()<<endl;
        cout<<7+9*4/8-3<<endl;
}