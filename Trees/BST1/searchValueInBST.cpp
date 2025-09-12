#include<iostream>
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
Node* searchBST(Node* root, int val) {
        if(root==NULL) return root;
        if(root->val==val) return root;
        if(val<root->val) return searchBST(root->left,val);
        else return searchBST(root->right,val);
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
    Node* result=searchBST(a,15);
    if(result!=NULL){
        cout<<"Subtree from founded root ("<<result->val<<") is :";
        cout<<endl;
        displayTree(result);
        cout<<endl;
    }
    else{
        cout<<"Not Found";
    }
}