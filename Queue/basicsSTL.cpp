#include<iostream>
#include<queue>
using namespace std;
void display(queue<int>& q){
    int n=q.size();
    for(int i=0;i<n;i++){
        cout<<q.front()<<" ";
        int x=q.front();
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
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
    display(q);
    q.pop();
    display(q);
}