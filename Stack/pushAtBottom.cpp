#include<iostream>
#include<stack>
using namespace std;
void pushAtBottom(stack<int> &st, int x){
    if(st.empty()){
        st.push(x);
        return;
    }
    stack<int> temp;
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }
    st.push(x);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
void print(stack<int> st){
    stack<int>temp;
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }
    cout<<endl;
    cout<<"Stack elements in inserted order: ";
    //putting elements back from temp tp st
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<"Stack size: "<<st.size()<<endl;
    print(st);
    cout<<endl;
    pushAtBottom(st,70);
    cout<<"Stack size after pushinh 70 at bottom: "<<st.size()<<endl;
    print(st);
}