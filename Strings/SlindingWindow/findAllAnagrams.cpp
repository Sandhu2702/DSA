//Anagrams---same characters with the same frequency, but the characters can be in a different order.
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;

// int FindAllAnagrams(string s,string p){
//     int n= s.length();
//     string sortedP = p;
//     sort(sortedP.begin(), sortedP.end());
//     int count=0;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             if(j-i+1 == p.length()){
//                 string temp=s.substr(i,j-i+1);
//                 sort(temp.begin(),temp.end());

//                 if(sortedP==temp){
//                     count++;
//                 }
//                 break;
//             }
//         }
//     }
//     return count;
// }

vector<int>FindAllAnagrams(string s,string p){
    int n=s.length();
    int k=p.length();
    vector<int>ans;

    unordered_map<char,int> pMap;

    for(char ch : p){
        pMap[ch]++;
    }

    unordered_map<char,int> sMap;

    int l=0;

    for(int r=0;r<n;r++){
        sMap[s[r]]++;

        if(r-l+1 > k){
            sMap[s[l]]--;
            if(sMap[s[l]]==0){
                sMap.erase(s[l]);
            }
            l++;
        }

        if(r-l+1 == k){
            if(sMap==pMap){
                ans.push_back(l);
            }
        }
    }
    return ans;
}

int main(){
    string s;
    cout<<"Enter any string: ";
    cin>>s;
    string p;
    cout<<"Enter any other string: ";
    cin>>p;

    vector<int> ans=FindAllAnagrams(s,p);
    cout<<"Total number of Anagrams of p: ";

    for(int index:ans){
        cout<<index<<" ";
    }
}