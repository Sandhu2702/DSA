#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={2,1,5,6,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int psi[n];//previous smaller elements's index
    stack<int> st;
    psi[0]=-1;
    st.push(0);
    for(int i=1;i<n;i++){
        while(!st.empty() && arr[st.top()]>=arr[i]){
            st.pop();
        }
        //mark the ans in nge array
        if(st.empty()){
            psi[i]=-1;
        }else{
            psi[i]=st.top();
        }
        //push the arr[i] in stack
        st.push(i);
    }
    for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
            cout<<psi[i]<<" ";
    }
    cout<<endl;
    stack<int> st1;
    int nsi[n];//next smaller element's index
    nsi[n-1]=n;
    st1.push(n-1);
    for(int i=n-2;i>=0;i--){
        while(!st1.empty() && arr[st1.top()]>=arr[i]){
            st1.pop();
        }
        //mark the ans in nge array
        if(st1.empty()){
            nsi[i]=6;
        }else{
            nsi[i]=st1.top();
        }
        //push the arr[i] in stack
        st1.push(i);
    }
    for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
            cout<<nsi[i]<<" ";
    }
    cout<<endl;
    int maxArea=0;
    for(int i=0;i<n;i++){
        int width=nsi[i]-psi[i]-1;
        int area=width*arr[i];
        maxArea=max(maxArea,area);
    }
    cout<<maxArea<<endl;

}