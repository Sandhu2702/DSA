#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node*next;
    Node(int value){
        this->value=value;
        this->next=NULL;
    };
};
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->value<<" ";
        temp=temp->next;
    }
}
bool hasCycle(Node* head){
    if(!head || !head->next) return false;
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast) return true;

    }
}
int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(3);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e; 
    e->next=f;  
    f->next=c;
    Node* head=a;
    bool cycle=hasCycle(head);
    if(cycle) cout<<"Linked list has a cycle"<<endl;
    else cout<<"Linked list does not have any cycle;"<<endl;
    return 0;

}