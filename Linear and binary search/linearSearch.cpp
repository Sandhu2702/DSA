#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,5,7,3,87,52,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=98;
    bool flag=false;
    for (int i=0;i<n;i++){
        if(arr[i]==target){
            flag=true;
            break;
        }
    }
    if(flag==true) cout<<"Number found";
    else cout<<"Number not found";
}