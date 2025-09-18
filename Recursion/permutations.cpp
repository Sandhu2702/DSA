#include<iostream>
#include<vector>
using namespace std;
void permutations(string s,string str){
    if(str==""){
        cout<<s<<endl;
        return;
    }
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        string left=str.substr(0,i);
        string right=str.substr(i+1);
        permutations(s+ch,left+right);
    }
}
int main(){
    string str="abcd";
    //c ka idx 2, string len=5(0-4)
    string left= str.substr(0,2);
    cout<<left<<endl;
    string right= str.substr(2+1);
    cout<<right;
    permutations("",str);
}