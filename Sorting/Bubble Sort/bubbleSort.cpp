#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={5,1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // for(int i=0;i<n-1;i++){//n-1 passes
    //     //traverse
    //     for(int j=0;j<n-1-i;j++){
    //         if(arr[j]>arr[j+1]){// swap
    //             // int temp=arr[j];
    //             // arr[j]=arr[j+1];
    //             // arr[j+1]=temp;
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }
    // }
    // optimized bubble sort----------------------------->
    for(int i=0;i<n-1;i++){
        //traverse
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){// swap
                swap(arr[j],arr[j+1]);
                flag=false;
            }
        }
        if(flag==true){//swap didn't happen
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}