#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());// 7 8 9 10
        sort(s.begin(),s.end());// 5 6 7 8
        int count=0;
        int i=0;
        int j=0;
        while(i<g.size() && j<s.size()){
            if(s[j]>=g[i]){
                count++;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return count;
 }
int main(){
    int arr[]={16,15,14,7};
    int n1=sizeof(arr)/sizeof(arr[0]);
    vector<int>v1(n1);
    for(int i=0;i<n1;i++){
        v1[i]=arr[i];
    }
    int arr2[]={5,6,7,8,9,11,15,14,13,12,10,17,16};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    vector<int>v2(n2);
    for(int i=0;i<n2;i++){
        v2[i]=arr2[i];
    }
    cout<<findContentChildren(v1,v2);
}