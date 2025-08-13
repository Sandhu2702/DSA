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
Node* detectCycle(Node* head){
    Node* slow=head;
    Node* fast=head;
    bool flag=false;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            flag= true;
            break;
        }
    }
    if(flag==false) return NULL;
    else{
        Node*temp=head;
        while(temp!=slow){
            temp=temp->next;
            slow=slow->next;
        }
        return slow; // return the node where the cycle starts
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
    Node*start1=detectCycle(head);
    cout<<"The cycle starts at node with value: "<<start1->value<<endl;
    
    return 0;

}