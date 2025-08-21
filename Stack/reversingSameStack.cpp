#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    cout<<"Stack size: "<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<"Stack size: "<<st.size()<<endl;
    st.pop();
    cout<<"Stack size: "<<st.size()<<endl;
    cout<<"Top element: "<<st.top()<<endl;
    cout<<"Stack elements: ";
    //printing in reverse order-->emptying the stack
    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    stack<int>temp1;
    stack<int>temp2;
    while(!st.empty()){
        cout<<st.top()<<" ";
        temp1.push(st.top());
        st.pop();
    }
    cout<<endl;
    while(!temp1.empty()){
        temp2.push(temp1.top());
        temp1.pop();
    }
    while(!temp2.empty()){
        st.push(temp2.top());
        temp2.pop();
    }
}