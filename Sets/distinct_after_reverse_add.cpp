#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

int reverse(int n){
    int rev=0;
    while(n>0){
        rev=rev*10;
        rev+=(n%10);
        n/=10;
    }
    return rev;
}

int countDistinct(vector<int>&nums){
    int n=nums.size();
    for(int i=0;i<n;i++){
        int rev=reverse(nums[i]);
        nums.push_back(rev);
    }
    unordered_set<int>s;
    for(int i=0;i<nums.size();i++){
        s.insert(nums[i]);
    }
    return s.size();

}

int main(){
   vector<int>nums;
   nums.push_back(1);
   nums.push_back(13);
   nums.push_back(10);
   nums.push_back(12);
   int number_of_distinct=countDistinct(nums);
   cout<<number_of_distinct;
}