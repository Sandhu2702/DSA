#include<iostream>
#include<stack>
#include <climits>
using namespace std;
class MinStack {
public:
    stack<long long> st;
    long long min;
    MinStack() {
        min=LLONG_MAX;
    }
    
    void push(int val) {
        long long x=(long long)val;
        if(st.size()==0){
            st.push(x);
            min=val;
        }
        else if(val>=min) st.push(x);
        else{//val<min
            st.push(2*x-min); 
            min=x;
        } 
    }
    
    void pop() { //O(1)
        if(st.top()<min){//st.top()<min : A fake value is present
            //before poping make sure to retrieve the old min
            long long oldMin=2*min-st.top();
            min=oldMin;
        }
        st.pop();
    }
    
    int top() { //O(n)
        if(st.top()<min){
            return (int)min;
        }
        else return (int)st.top();
    }
    
    int getMin() {//O(n)
        return min;
    }

};
int main(){
    MinStack st;
    st.push(6);
    st.push(5);
    st.push(2);
    st.push(0);
    st.push(3);
    st.push(1);
    cout << "Top = " << st.top() << endl;
    cout << "Min = " << st.getMin() << endl;


    
}