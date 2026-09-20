#include<iostream>
#include<climits>
#include<vector>
using namespace std;

vector<vector<int>> matrixBlockSum(vector<vector<int>>&mat,int k){
    int m=mat.size();
    int n=mat[0].size();
    vector<vector<int>> ans(m, vector<int>(n,0));

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int sum=0;
            for(int r=i-k;r<=i+k;r++){
                for(int c=j-k;c<=j+k;c++){
                    if(r>=0 && r<=m-1 && c>=0 && c<=n-1){
                        sum+=mat[r][c];
                    }
                }
            }
            ans[i][j]=sum;
        }
    }
    return ans;
}

int main(){
    vector<vector<int>>v={{1,2,3},{4,5,6},{7,8,9}};

    vector<vector<int>>ans = matrixBlockSum(v,1);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}
