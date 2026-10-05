#include<iostream>
#include<string>
using namespace std;

bool check(string s,int l, int r){
    while(l<r){
        if(s[l]!=s[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}

bool ValidPalindrome(string s){
    int l=0;
    int r=s.size()-1;
    while(l<r){
        if(s[l]!=s[r]){
            return check(s,l+1,r) || check(s,l,r-1);
        }
        l++;
        r--;
    }
    return true;
}

int main(){
    string s;
    cout<<"Enter any string: ";
    cin>>s;
    cout<<ValidPalindrome(s);
}