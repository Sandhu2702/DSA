#include<iostream>
#include<vector>
using namespace std;

vector<int> nearestSmaller(int arr[],int n){
    vector<int>result(n,-1);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                result[i]=arr[j];
                break;
            }
        }
    }
    return result;
}

int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>result = nearestSmaller(arr,n);
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
}