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
void morrisTraversal(Node* root){
    Node* pred;
    Node* curr=root;
    while(curr!=NULL){
        if(curr->left!=NULL){//find pred
            pred=curr->left;
            while(pred->right!=NULL && pred->right!=curr){
                pred=pred->right;
            }
            if(pred->right==NULL){
                pred->right=curr;
                curr=curr->left;
            }
            if(pred->right==curr){//unlink 
                pred->right=NULL;
                cout<<curr->val<<" ";
                curr=curr->right;          
            }
        }
        else{
                //case1 no child
            cout<<curr->val<<" ";
            curr=curr->right;
            }
    }
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
    morrisTraversal(a);
    
}