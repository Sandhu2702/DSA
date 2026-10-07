#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

bool permutationInString(string s,string p){
    int n1=s.length();
    int n2=p.length();
    unordered_map<char,int>mp1;
    for(int i=0;i<n1;i++){
        mp1[s[i]]++;
    }

    if(n1>n2){
        return false;
    }

    unordered_map<char,int>mp2;
    int l=0;
    for(int r=0;r<n2;r++){
        mp2[p[r]]++;

        if(r-l+1>n1){
            mp2[p[l]]--;
            if(mp2[p[l]]==0){
                mp2.erase(p[l]);
            }
            l++;
        }

        if(mp2==mp1){
            return true;
        }
    }
    return false;

}

int main(){
    string s;
    cout<<"Enter string s: ";
    cin>>s;
    string p;
    cout<<"Enter string p: ";
    cin>>p;
    bool permutation=permutationInString(s,p);
    if(permutation){
        cout<<"Present";
    }else{
        cout<<"Not present";
    }
}