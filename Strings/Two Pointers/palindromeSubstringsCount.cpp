#include<iostream>
#include<string>
using namespace std;
// int palindrome(string s, int l, int r){
//     while(l<r){
//         if(s[l]!=s[r]){
//             return 0;
//         }
//         l++;
//         r--;
//     }
//     return 1;
// }

// int countPalindromeSubstrings(string s){
//     int n=s.length();
//     int count=0;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             count+=palindrome(s,i,j);
//         }
//     }
//     return count;
// }

int expand(string s, int l, int r){
    int count=0;
    while(l>=0 && r<=s.length()-1 && s[l]==s[r]){
        count++;
        l--;
        r++;
    }
    return count;
}

int countPalindromes(string s){
    int count=0;
    int n=s.length();
    for(int i=0;i<n;i++){
        count+=expand(s,i,i);
        count+=expand(s,i,i+1);
    }

    return count;
}

int main(){
    string s;
    cout<<"enter any string: ";
    cin>>s;
    cout<<"Total palindromic substrings are: "<<countPalindromes(s);
}