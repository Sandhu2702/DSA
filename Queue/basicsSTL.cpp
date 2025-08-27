#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<"Front element:"<<q.front()<<endl;
    cout<<"Back element:"<<q.back()<<endl;
    cout<<"size of queue: "<<q.size()<<endl;
    q.pop();
    cout<<"Now front element:"<<q.front()<<endl;
    cout<<"size of queue: "<<q.size()<<endl;
}