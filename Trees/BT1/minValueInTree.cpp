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
int min(Node* root){
    if(root==NULL) return INT_MAX;
    int lMax=min(root->left);
    int rMax=min(root->right);
    return min(root->val,min(lMax,rMax));
}
int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(41);
    Node* e=new Node(0);
    Node* f=new Node(6);
    Node* g=new Node(7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    cout<<"Node with maximum value in Tree: "<<min(a);
}