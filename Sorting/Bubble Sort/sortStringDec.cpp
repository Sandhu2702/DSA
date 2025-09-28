#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="AZYZXBDXJK";
    string str="";
    for(int i=0;i<s.size();i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }
    for(int i=0;i<str.size()-1;i++){
        //traverse
        bool flag=true;
        for(int j=0;j<str.size()-1-i;j++){
            if(str[j]>str[j+1]){// swap
                swap(str[j],str[j+1]);
                flag=false;
            }
        }
        if(flag==true){//swap didn't happen
            break;
        }
    }
    // sort(str.begin(),str.end());
    // reverse(str.begin(),str.end());
    // cout<<str;
    
    for(int i=0;i<str.size();i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    for(int i=str.size()-1;i>=0;i--){
        cout<<str[i]<<" ";
    }
    
}