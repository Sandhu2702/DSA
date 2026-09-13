#include<iostream>
using namespace std;
int main(){
    int height[]={1,8,6,2,5,4,8,3,7};
    int n=sizeof(height)/sizeof(height[0]);

    //Optimized approach with O(N) time complexity
    int maxArea=0;
    int area=0;
    int l=0;
    int r=n-1;
    while(l<r){
        int h=min(height[l],height[r]);
        int w=r-l;
        area=h*w;
        maxArea=max(maxArea,area);
        if(height[l]<=height[r]){
            l++;
        }else{
            r--;
        }
    }
    cout<<"Most water contained will be:"<<maxArea;
}