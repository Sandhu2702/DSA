#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s="bananab";
    //first method----by reversing string in other string variable---O(n)+O(n)+O(n)
    // string s2=s;
    // reverse(s2.begin(),s2.end());
    // if(s==s2){
    //     cout<<"Palindrome";
    // }else{
    //     cout<<"Not plaindrome";
    // }


    //2nd method------------two pointers approach
    int i=0;
    int j=s.size()-1;
    bool flag=true;
    while(i<j){
        if(s[i]!=s[j]){
            flag=false;
            break;
        }
        i++;
        j--;
    }
    if(flag==true){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not palindrome";
    }
}