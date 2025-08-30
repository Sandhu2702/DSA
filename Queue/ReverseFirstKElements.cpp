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
void reverseK_Elements(queue<int>& q, int k){
    stack<int> st;
    //empty the queue into stack
    for(int i=0;i<k;i++){
        int x=q.front();
        q.pop();
        st.push(x);
    }
    //empty the stack into queue
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    //move the first n-k elements to back of the queue
    int n=q.size();
    for(int i=0;i<n-k;i++){
        int x=q.front();
        q.pop();
        q.push(x);
    }
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    int k;
    cout<<"Enter value of elements to be reversed: ";
    cin>>k;
    reverseK_Elements(q, 3);
    display(q);
}