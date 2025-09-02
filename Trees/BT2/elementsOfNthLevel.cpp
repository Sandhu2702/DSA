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
void elementsNthLevel(Node* root,int current, int level){
    if(root==NULL) return;
    if(current==level) cout<<root->val<<" ";
    elementsNthLevel(root->left,current+1,level);
    elementsNthLevel(root->right,current+1,level);
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
    int level;
    cout<<"Enter level number: ";
    cin>>level;
    elementsNthLevel(a,1,level);
}