#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
int levels(Node* root){
    if(root==NULL) return 0 ;
    int left_levels=levels(root->left);
    int right_levels=levels(root->right);
    return 1+max(left_levels,right_levels);
}
void preorder(Node* root,vector<int>& ans,int level){
    if(root==NULL) return;
    ans[level]=root->val;
    preorder(root->left,ans,level+1);
    preorder(root->right,ans,level+1);
}
int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    // Node* g=new Node(7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    // c->right=g;
    levels(a);
    vector<int> ans(levels(a),0);
    preorder(a,ans,0);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}