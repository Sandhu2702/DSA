// Return the first character, number of middle characters, and last character.

#include<iostream>
#include<cstring>
using namespace std;

string shortenWord(const string& word){
    int n=word.size();
    if(n<=2) return word;
    return word[0]+to_string(n-2)+word[n-1];
}

int main(){
    string s= "examination";
    cout<<"Shorten word: "<<shortenWord(s);
}