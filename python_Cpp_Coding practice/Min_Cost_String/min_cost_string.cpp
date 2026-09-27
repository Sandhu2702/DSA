#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int minCostToVowel(string &str){
    vector<int>vowels={'a','e','i','o','u'};
    int minCost=INT_MAX;
    for(char target:vowels){
        int cost=0;
        for(char ch:str){
            if(ch==target){
                continue;
            }
            else if(find(vowels.begin(),vowels.end(), ch)!=vowels.end()){
                cost+=abs((int)ch -(int)target);
            }
            else{
                cost+=10;
            }
        }
        minCost=min(minCost,cost);
    }
    if(minCost==0){
        return -1;
    }else{
        return minCost;
    }
}

int main(){
    string str;
    cout<<"Enter any string";
    cin>>str;
    int minCost=minCostToVowel(str);
    cout<<"Mincost to change all char in one vowel : "<<minCost;
}