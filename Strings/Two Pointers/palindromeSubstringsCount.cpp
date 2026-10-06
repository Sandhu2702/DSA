#include<iostream>
#include<string>
using namespace std;
int palindrome(string s, int l, int r){
    while(l<r){
        if(s[l]!=s[r]){
            return 0;
        }
        l++;
        r--;
    }
    return 1;
}

int countPalindromeSubstrings(string s){
    int n=s.length();
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            count+=palindrome(s,i,j);
        }
    }
    return count;
}

int main(){
    string s;
    cout<<"enter any string: ";
    cin>>s;
    cout<<"Total palindromic substrings are: "<<countPalindromeSubstrings(s);
}