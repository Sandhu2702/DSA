#include<iostream>
#include<climits>
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
void trim(Node* root, int lo, int hi) {
        if(root==NULL) return;
        while(root->left!=NULL){
            if(root->left->val <lo){
                root->left=root->left->right;
            }
            else if(root->left->val >hi){
                root->left=root->left->left;
            }
            else break;
        }
        while(root->right!=NULL){
            if(root->right->val >hi){
                root->right=root->right->left;
            }
            else if(root->right->val <lo){
                root->right=root->right->right;
            }
            else break;
        }
        trim(root->left,lo,hi);
        trim(root->right,lo,hi);
}
Node* trimBST(Node* root, int lo, int hi) {
    Node* dummy=new Node(INT_MAX);
    dummy->left=root;
    dummy->right=NULL;
    trim(dummy,lo,hi);
    return dummy->left;
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
    trimBST(a, 3, 14);
    displayTree(a);
    
    
}