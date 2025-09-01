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
int maxDia=0;
int levels(Node* root){
    if(root==NULL) return 0 ;
    int left_levels=levels(root->left);
    int right_levels=levels(root->right);
    return 1+max(left_levels,right_levels);
}
int helper(Node* root){
    if(root==NULL) return 0;
    int dia = levels(root->left)+levels(root->right);
    maxDia = max(maxDia,dia);
    helper(root->left);
    helper(root->right);
    return maxDia;
}
int diameter(Node* root){
    maxDia=0;
    return helper(root);
}
int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    cout<<"Diameter: "<<diameter(a);
}