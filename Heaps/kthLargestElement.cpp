#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
int main(){
     vector<int> arr={10,20,-4,6,18,24,105,118};
     int k;
     cout<<"kth number:";
     cin>>k;
     priority_queue<int, vector<int>, greater<int> > pq;
        for(int i=0;i<arr.size();i++){
            pq.push(arr[i]);
            if(pq.size()>k) pq.pop();
        }
     cout<<pq.top();
}