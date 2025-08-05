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
int main(){
    Node* a=new Node(10);
    Node* b=new Node(5);
    Node* c=new Node(26);
    Node* d=new Node(16);
    Node* e=new Node(67);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    display(a);

}