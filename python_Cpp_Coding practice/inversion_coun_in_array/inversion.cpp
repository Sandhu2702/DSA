#include<iostream>
using namespace std;

int InversionCount(int *A,int n){
    if(n<2){
        return 0;
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(A[j]>A[i]){
                count++;
            }
        }
    }
    return count;
}

int main(){
    int arr[]={1,20,6,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Total counts: "<<InversionCount(arr,n);

}