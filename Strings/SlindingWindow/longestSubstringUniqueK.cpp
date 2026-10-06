#include<iostream>
#include<string>
#include<unordered_set>
#include<unordered_map>
using namespace std;

// int longestWithKUnique(string s,int k){
//     int n=s.length();
//     int maxLength=0;
//     for(int i=0;i<n;i++){
//         unordered_set<char>st;
//         for(int j=i;j<n;j++){
//             st.insert(s[j]);

//             if(st.size()>k){
//                 break;
//             }

//             if(st.size()==k){
//                 maxLength=max(maxLength,j-i+1);
//             }
//         }
//     }
//     return maxLength;
// }

int longestWithKUnique(string s,int k){
    int n=s.length();
    int maxLength=0;
    int l=0;
    unordered_map<char,int> m;
    for(int r=0;r<n;r++){
        m[s[r]]++;

        if(m.size()==k){
            maxLength=max(maxLength, r-l+1);
        }

        while(m.size()>k){
            m[s[l]]--;
            if(m[s[l]]==0){
                m.erase(s[l]);
            }
            l++;
        }
    }
    return maxLength;
}


int main(){
    string s;
    cout<<"Enter any string: ";
    cin>>s;
    int k;
    cout<<"Enter number of unique characters required: ";
    cin>>k;
    cout<<endl<<"longest substring will be: "<<longestWithKUnique(s,k);

}