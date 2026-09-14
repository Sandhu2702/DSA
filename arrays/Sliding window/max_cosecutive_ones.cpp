#include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,0,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxCount=0;
    int currentCount=0;
    int j=0;
    for(int num:arr){
        if(num==1){
            currentCount++;
        }
        else{
            maxCount=max(currentCount,maxCount);
            currentCount=0;
        }
    }

    cout<<max(maxCount,currentCount);
}