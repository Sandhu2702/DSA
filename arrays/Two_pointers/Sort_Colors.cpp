#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={1,1,0,2,0,1,2,0,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    // int noZ=0;
    // int noO=0;
    // int noT=0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]==0) noZ++;
    //     else if(arr[i]==1) noO++;
    //     else noT++;
    // }

    // for(int i=0;i<n;i++){
    //     if(i<noZ) arr[i]=0;
    //     else if(i<(noZ+noO)) arr[i]=1;
    //     else arr[i]=2;
    // }

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    //Dutch national flag algorithm
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            arr[mid]=arr[low];
            arr[low]=0;
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            int temp=arr[mid];
            arr[mid]=arr[high];
            arr[high]=temp;
            high--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}