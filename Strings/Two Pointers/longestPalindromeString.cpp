#include<iostream>
#include<string>
using namespace std;

string check(string s,int l, int r){
    int n=s.size();
    while(l>=0 && r<n && s[l]==s[r]){
        l--;
        r++;
    }
    return s.substr(l+1,r-(l+1));
}

string longestPalindrome(string s){
    string ans="";
    string odd="";
    string even="";
    int n=s.size();
    for(int i=0;i<n;i++){
        odd=check(s,i,i);
        even=check(s,i,i+1);
        if(odd.size()>ans.size()){
            ans=odd;
        }
        if(even.size()>ans.size()){
            ans=even;
        }

    }
    return ans;

}

int main(){
    string s;
    cout<<"Enter any string: ";
    cin>>s;
    cout<<longestPalindrome(s);
}