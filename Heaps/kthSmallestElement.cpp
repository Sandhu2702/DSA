#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={10,2,49,50,34,11,4,0,-3};
    int n=arr.size();
    int k;
    cout<<"kth number:";
    cin>>k;
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            pq.pop();
        }
    }
    cout<<pq.top();
}