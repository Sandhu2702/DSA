// length of the longest substring without duplicate characters.

#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int lengthOfLongestSubstring(string s){
    int n=s.length();
    int maxLength=0;
    unordered_map<char,int>mp;
    int l=0;

    for(int r=0;r<n;r++){
        mp[s[r]]++;

        while(mp[s[r]]>1){
            mp[s[l]]--;
            l++;
        }
        maxLength=max(maxLength,r-l+1);
    }
    return maxLength;
}

int main(){
    string s;
    cout<<"Enter any string: ";
    cin>>s;
    cout<<"length of substring without repeating charaters:"<<lengthOfLongestSubstring(s);
}