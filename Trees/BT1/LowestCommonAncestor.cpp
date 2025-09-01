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
bool exists(Node* root,Node* target){
    if(root==NULL) return false;
    if(root==target) return true;
    return exists(root->left,target) || exists(root->right,target);
}
Node* LowestCommonAncestor(Node* root,Node* p, Node* q){
    if(root==p ||root==q) return root;
    else if(exists(root->left,p) && exists(root->right,q)) return root;
    else if(exists(root->right,p) && exists(root->left,q)) return root;
    else if(exists(root->left,p) && exists(root->left,q)) return LowestCommonAncestor(root->left,p,q);
    else return LowestCommonAncestor(root->right,p,q);
} 
void displayTree(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
}
int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);
    Node* h=new Node(8);
    Node* i=new Node(9);
    Node* j=new Node(10);
    Node* k=new Node(11);
    Node* l=new Node(12);
    Node* m=new Node(13);
    Node* o=new Node(14);
    Node* p=new Node(15);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    d->left=h;
    d->right=i;
    e->left=j;
    e->right=k;
    c->left=f;
    c->right=g;
    f->left=l;
    f->right=m;
    g->left=o;
    g->right=p;
    Node* LCA=LowestCommonAncestor(a,g,e);
    cout<<LCA->val;
}