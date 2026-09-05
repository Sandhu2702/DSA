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

    //using set 
    // set<int>s;
    // for(int i=0;i<n1;i++){
    //     s.insert(arr1[i]);
    // }
    // for(int i=0;i<n2;i++){
    //     s.insert(arr2[i]);
    // }
    
    // int union_array[s.size()];
    // int i=0;
    // for(auto it:s){
    //     union_array[i]=it;
    //     i++;
    // }

    // int n3=sizeof(union_array)/sizeof(union_array[0]);
    // for(int i=0;i<n3;i++){
    //     cout<<union_array[i]<<" ";
    // }

    //two pointer approach-------------
    int i=0;
    int j=0;
    vector<int>union_list;
    
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            if(union_list.size()==0 || union_list.back()!=arr1[i]){
                union_list.push_back(arr1[i]);
            }
            i++;
        }else{
            if(union_list.size()==0 || union_list.back()!=arr2[j]){
                union_list.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(j<n2){
        if(union_list.size()==0 || union_list.back()!=arr2[j]){
            union_list.push_back(arr2[j]);
        }
        j++;
    }
    while(i<n1){
        if(union_list.size()==0 || union_list.back()!=arr1[i]){
            union_list.push_back(arr1[i]);
        }
        i++;
    }

    for(int i=0;i<union_list.size();i++){
        cout<<union_list[i]<<" ";
    }

    
}