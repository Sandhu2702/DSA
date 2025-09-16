#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int arr[]={6,5,3,2,8,10,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k;
    cout<<"Enter value of k: ";
    cin>>k;
    priority_queue<int,vector<int>, greater<int>> pq;
    int idx=0;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            arr[idx++]=pq.top();
            pq.pop();
        }
    }
    while(pq.size()>0){
        arr[idx++]=pq.top();
        pq.pop();
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}