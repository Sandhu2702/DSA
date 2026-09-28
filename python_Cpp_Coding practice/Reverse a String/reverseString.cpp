// Reverse only alphabetic characters while keeping special characters at their original positions.

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string reverseString(string s){
    if(s.empty()){
        return "";
    }

    int left=0;
    int right=s.size()-1;

    while(left<right){
        if(!isalpha(s[left])){
            left++;
        }
        else if(!isalpha(s[right])){
            right--;
        }
        else{
            swap(s[left],s[right]);
            left++;
            right--;
        }
    }

    return s;
}

int main(){
    string s;
    getline(cin,s);
    string r=reverseString(s);
    cout<<r;

}