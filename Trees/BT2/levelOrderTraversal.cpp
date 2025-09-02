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
int levels(Node* root){
    if(root==NULL) return 0 ;
    int left_levels=levels(root->left);
    int right_levels=levels(root->right);
    return 1+max(left_levels,right_levels);
}
void elementsNthLevel(Node* root,int current, int level){
    if(root==NULL) return;
    if(current==level) cout<<root->val<<" ";
    elementsNthLevel(root->left,current+1,level);
    elementsNthLevel(root->right,current+1,level);
}
void levelOrder(Node* root){
    int n=levels(root);
    for(int i=1;i<=n;i++){
        elementsNthLevel(root,1,i);
        cout<<endl;
    }
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
    levels(a);
    levelOrder(a);
}