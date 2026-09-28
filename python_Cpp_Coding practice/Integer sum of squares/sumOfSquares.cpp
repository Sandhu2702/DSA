#include<iostream>
using namespace std;
int minSquares(int n){
    int minSq=0;
    for(int i=0;i<n;i++){
        int sum=0;
        int count=0;
        for(int j=1;j<n;j++){
            sum+=j*j;
            count++;
        }
        if(sum==n){
            return count;
        }
    }
}