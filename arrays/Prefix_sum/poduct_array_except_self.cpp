#include<iostream>
#include<vector>
using namespace std;

// void productArrayExceptSelf(int arr[],int ans[], int n){
//     for(int l=0;l<n;l++){
//         int product=1;
//         for(int r=0;r<n;r++){
//             if(r!=l){
//                 product*=arr[r];
//             }
//         }
//         ans[l]=product;
//     }
// }

// int main(){
//     int nums[]={2,3,4,5};
//     int n=sizeof(nums)/sizeof(nums[0]);
//     int ans[n];
//     productArrayExceptSelf(nums,ans, n);

//     for (int i = 0; i < n; i++) {
//         cout << ans[i] << " ";
//     }

//     return 0;

// }

//2nd method -----------prefix and suffiex sum
vector<int> productArrayExceptSelf(vector<int>nums){
    int n=nums.size();
    int product=1;
    vector<int>pre(n,1);
    vector<int>suf(n,1);
    vector<int>ans(n,0);
    for(int i=1;i<n;i++){
        product*=nums[i-1];
        pre[i]=product;
    }
    int product2=1;
    for(int i=n-2;i>=0;i--){
        product2*=nums[i+1];
        pre[i]=product2;
    }

    for(int i=0;i<n;i++){
        ans[i]=pre[i]*suf[i];
    }

    return ans;
}

int main(){
    int nums[]={2,3,4,5};
    int n=sizeof(nums)/sizeof(nums[0]);

    vector<int> v(nums, nums + n);
    vector<int>ans=productArrayExceptSelf(v);

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

    return 0;

}