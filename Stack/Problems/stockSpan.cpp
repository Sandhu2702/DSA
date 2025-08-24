#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={100,80,60,81,70,60,75,85};
    int n=sizeof(arr)/sizeof(arr[0]);
    int pge[n];
    stack<int> st;
    pge[0]=-1;
    st.push(0);
    for(int i=1;i<n;i++){
        while(!st.empty() && arr[st.top()]<=arr[i]){
            st.pop();
        }
        //mark the ans in nge array
        if(st.empty()){
            pge[i]=-1;
        }else{
            pge[i]=st.top();
        }
        //push the i in stack
        st.push(i);
    }
    for(int i=0;i<n;i++){
            cout<<pge[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        if(pge[i]==-1){
            cout<<i+1<<" ";
        }
        else{
            cout<<i-pge[i]<<" ";
        }
    }

}