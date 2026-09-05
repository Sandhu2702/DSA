#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(3);
    v.push_back(2);
    v.push_back(0);
    v.push_back(0);
    v.push_back(4);
    v.push_back(5);
    v.push_back(1);
    int n=v.size();
    vector<int>temp;

    //first approach----------using extra array....O(2N)time complexity, space ocomplexity O(N)
    // for(int i=0;i<n;i++){
    //     if(v[i]!=0){
    //         temp.push_back(v[i]);
    //     }
    // }
    // for(int i=0;i<temp.size();i++){
    //     v[i]=temp[i];
    // }
    // for(int i=temp.size();i<n;i++){
    //     v[i]=0;
    // }
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }

    //second approach-----------two pointer O(x+(N-x))time complexity and space complexity O(1)
    int j=-1;
    for(int i=0;i<n;i++){
        if(v[i]==0){
            j=i;
            break;
        }
    }
    for(int i=j+1;i<n;i++){
        if(v[i]!=0){
            swap(v[i],v[j]);
            j++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }


}