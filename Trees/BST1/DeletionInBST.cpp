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
Node* iop(Node*root){
    Node* pred=root->left;
    while(pred->right){
        pred=pred->right;
    }
    return pred;
}
Node* ios(Node*root){
    Node* suc=root->right;
    while(suc->left){
        suc=suc->left;
    }
    return suc;
}
Node* deleteNode(Node* root, int key) {
    if(root==NULL) return NULL;
        if(root->val==key){
            //case 1:No child
            if(root->left==NULL && root->right==NULL) return NULL;

            //case 2: One child
            if(root->left==NULL || root->right==NULL){
               if(root->left!=NULL) return root->left;
               else return root->right;
            }

            //case 3: 2 child nodes
            if(root->left!=NULL && root->right!=NULL){
                //replace root with its inorder predecessror/successor
                //after replacing delete the pred/suc
                Node* pred=iop(root);
                root->val=pred->val;
                root->left=deleteNode(root->left,pred->val);
            }
        }
        else if(root->val > key){//go left
            root->left=deleteNode(root->left,key);
        }
        else{// root->val < key : go right
            root->right=deleteNode(root->right,key);
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
    deleteNode(a,10);
    displayTree(a);
    cout<<endl;
}