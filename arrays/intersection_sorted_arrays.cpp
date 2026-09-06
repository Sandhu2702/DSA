#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr1[]={1,1,2,3,4,5};
    int arr2[]={2,3,4,4,5,6};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);

    // int i=0;
    // int j=0;
    // vector<int>ans;
    // int vis[n2]={0};
    // for(int i=0;i<n1;i++){
    //     for(int j=0;j<n2;j++){
    //         if(arr1[i]==arr2[j] && vis[j]==0){
    //             ans.push_back(arr1[i]);
    //             vis[j]=1;
    //             break;
    //         }
    //         if(arr2[j]>arr1[i]) break;
    //     }
    // }

    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }

    // second approach ----two pointer O(n1+n2) time complexity
    int i=0;
    int j=0;
    vector<int>ans;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr2[j]<arr1[i]){
            j++;
        }
        else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    


    
}