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
void displayTree(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
}
void inorder(Node* root,vector<int>& ans){
    if(root==NULL) return;//base case
    inorder(root->left,ans);//left
    ans.push_back(root->val);//root
    inorder(root->right,ans);//right
}
bool isValidBST(Node* root) {
    vector<int> ans;
    inorder(root,ans);
    for(int i=1;i<ans.size();i++){
        if(ans[i]<=ans[i-1]) return false;
    }
    return true;    
}

int main(){
    Node* a=new Node(10);
    Node* b=new Node(5);
    Node* c=new Node(15);
    Node* d=new Node(2);
    Node* e=new Node(8);
    Node* f=new Node(14);
    Node* g=new Node(17);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    displayTree(a);
    cout<<endl;
    bool result=isValidBST(a);
    if(result==1) cout<<"true";
    else cout<<"false";
    cout<<endl;
    
}