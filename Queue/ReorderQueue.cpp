#include<iostream>
#include<queue>
#include<stack>
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
void reorder(queue<int>& q){
    stack<int> st;
    int n=q.size();
    for(int i=0;i<n/2;i++){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    for(int i=0;i<n/2;i++){
        st.push(q.front());
        q.pop();
    }
    //Interleave one by one
    while(!st.empty()){
        int x=st.top();
        st.pop();
        q.push(x);
        int y=q.front();
        q.pop();
        q.push(y);
    }
    //revere the queue
    while(q.size()>0){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    display(q);
    reorder(q);
    display(q);
    
}