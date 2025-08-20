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
    stack<int>temp;
    while(!st.empty()){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    //putting elements back from temp tp st
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl<<st.top()<<endl;
}