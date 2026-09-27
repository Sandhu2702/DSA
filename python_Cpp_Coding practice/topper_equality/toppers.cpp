#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int marks[n]={80,70,80,90,90};
    unordered_map<int,int>freq;
    for(int i=0;i<n;i++){
        freq[marks[i]]++;
    }

    




}