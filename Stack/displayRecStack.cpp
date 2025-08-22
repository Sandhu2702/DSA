#include<iostream>
#include<stack>
using namespace std;
void displayRec(stack<int> &st){
    if(!st.empty()){
        int x=st.top();
        cout<<x<<" ";
        st.pop();
        displayRec(st);
        st.push(x);
    }
}
void displayRecReverse(stack<int> &st){
    if(!st.empty()){
        int x=st.top();
        st.pop();
        displayRecReverse(st);
        cout<<x<<" ";
        st.push(x);
    }
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    displayRec(st);
    cout<<endl;
    displayRecReverse(st);
}