#include<iostream>
#include<vector>
using namespace std;
int partition(int arr[], int si, int ei){
    int pivotElement=arr[(si+ei)/2];
    int count=0;
    for(int i=si;i<=ei;i++){
        if(i==((si+ei)/2)) continue;
        if(arr[i]<=pivotElement){
            count++;
        }
    }
    int pivotIdx=count+si;
    swap(arr[(si+ei)/2],arr[pivotIdx]);
    int i=si;
    int j=ei;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<=arr[pivotIdx]) i++;
        if(arr[j]>arr[pivotIdx]) j--;
        else if(arr[i]>arr[pivotIdx] && arr[j]<=arr[pivotIdx]){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}
int kthSmallest(int arr[], int si, int ei,int k){//si-starting index and ei-ending index
    int pi=partition(arr,si,ei);// pi-pivot index
    if((pi+1)==k) return arr[pi];
    else if((pi+1)<k) return kthSmallest(arr,pi+1,ei,k);
    else return kthSmallest(arr,si,pi-1,k);
}
int main(){
    int arr[]={5,18,82,20,7,6,31,4,-8};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k=4;
    cout<<kthSmallest(arr,0,n-1,k);
}
