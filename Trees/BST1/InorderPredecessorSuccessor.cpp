#include<iostream>
#include<vector>
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
vector<int> InorderTraversal(Node* root,vector<int>& v){
    if(root==NULL) return v;
    InorderTraversal(root->left,v);
    v.push_back(root->val);
    InorderTraversal(root->right,v);
    return v;
}
// int inorderPredecessor(vector<int> v,int target){
//     int idx=0;
//     for(int i=0;i<v.size();i++){
//         if(v[i]==target){
//             idx=i;
//             break;
//         }
//     }
//     return v[idx-1];
// }
// int inorderSuccessor(vector<int> v,int target){
//     int idx=0;
//     for(int i=0;i<v.size();i++){
//         if(v[i]==target){
//             idx=i;
//             break;
//         }
//     }
//     return v[idx+1];
// }
void inorderPredecessor(Node* root,Node* target){
    //if(target->left==NULL) cout<<"NULL";
    // Node* pred=target->left;
    if(target->left!=NULL){
     Node* pred=target->left;
      while(pred->right!=NULL){
        pred=pred->right;
      }
    }
    Node* pred = NULL;
    Node* curr = root;
    while (curr != NULL) {
        if (target->val > curr->val) {
            pred = curr;         // possible predecessor
            curr = curr->right;
        } else if (target->val < curr->val) {
            curr = curr->left;
        } else {
            break;
        }
    }
    cout<<pred->val;
}
void inorderSuccessor(Node* root,Node* target){
    //if(target->left==NULL) cout<<"NULL";
    // Node* pred=target->left;
    if(target->right!=NULL){
     Node* pred=target->right;
      while(pred->left!=NULL){
        pred=pred->left;
      }
    }
    Node* pred = NULL;
    Node* curr = root;
    while (curr != NULL) {
        if (target->val < curr->val) {
            pred = curr;         // possible predecessor
            curr = curr->left;
        } else if (target->val > curr->val) {
            curr = curr->right;
        } else {
            break;
        }
    }
    cout<<pred->val;
}
int main(){
    Node* a=new Node(50);
    Node* b=new Node(30);
    Node* c=new Node(70);
    Node* d=new Node(20);
    Node* e=new Node(40);
    Node* f=new Node(60);
    Node* g=new Node(80);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    vector<int> v;
    displayTree(a);
    cout<<endl;
    InorderTraversal(a,v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // int pre=inorderPredecessor(v,60);
    // cout<<"Inorder Predecessor: "<<pre;
    // cout<<endl;
    // int succ=inorderSuccessor(v,60);
    // cout<<"Inorder Successor: "<<succ;
    cout<<"Inorder predecessor:";
    inorderPredecessor(a,e);
    cout<<endl;
    cout<<"Inorder Successor: ";
    inorderSuccessor(a,e);
    
    
}