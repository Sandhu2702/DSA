#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int, vector<int>, greater<int> > pq;
    pq.push(10);
    pq.push(2);
    pq.push(-6);
    pq.push(80);
    pq.push(40);
    pq.push(30);
    pq.push(0);
    cout<<pq.top();
    pq.pop();
    cout<<endl;
    cout<<pq.top();
}

