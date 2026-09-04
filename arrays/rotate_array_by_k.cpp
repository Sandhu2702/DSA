#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    a.push_back(6);
    a.push_back(7);

    int n=a.size();
    //first approach---------O(N) time complexity and O(1) space complexity
    //for one place rotation
    // int temp=a[0];
    // for(int i=1;i<n;i++){
    //     a[i-1]=a[i];
    // }
    // a[n-1]=temp;
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }

    //second approach--------O(N+d)-time complexity and O(d)-space complexity
    //for k places 
    int k=3;
    // int temp[k];
    // for(int i=0;i<k;i++){
    //     temp[i]=a[i];
    // }
    // for(int i=k;i<n;i++){
    //     a[i-k]=a[i];
    // }
    // int j=0;
    // for(int i=n-k;i<n;i++){
    //     a[i]=temp[j];
    //     j++;
    // }
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    
    //optimal approach-------revresing part of array---O(2N)-time complexity but space complexity-O(1)
    reverse(a.begin(),a.begin()+3);
    reverse(a.begin()+3, a.end());
    reverse(a.begin(),a.end());
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }



}