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
Node* insertIntoBST(Node* root, int val) {
        if(root==NULL) return new Node(val);
        else if(val<root->val){
            if(root->left==NULL){//attach it 
                 root->left=new Node(val);           
            }
            else insertIntoBST(root->left,val);
        } 
        else{
            if(root->right==NULL){//attach it 
                 root->right=new Node(val);           
            }
            else insertIntoBST(root->right,val);
        }
        return root;
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
    Node* result=insertIntoBST(a,3);
    displayTree(result);
    cout<<endl;
    
}