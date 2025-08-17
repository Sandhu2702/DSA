#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val= val;
        this->next= NULL;
        this->prev= NULL;
    }
};
class DLL{
    public:
    Node*head;
    Node* tail;
    int size=0;
    DLL(){
        head=tail=NULL;
        size=0;
    }
    void insertAtTail(int val){
        Node* temp=new Node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
            
        }
        size++;
    }
    void insertAtHead(int val){
        Node* temp=new Node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        size++;
    }
    void insertAtIdx(int idx,int value){
        if(idx<0 || idx>size) cout<<"Invalid Index"<<endl;
        else if(idx==0) insertAtHead(value);
        else if(idx==size) insertAtTail(value);
        else{
            Node* t=new Node(value);
            Node* temp=head;
            for(int i=0;i<idx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            t->prev=temp;
            t->next->prev=t;
            size++;

        }
    }
    void display(){
        Node* temp= head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
};
int main(){
    DLL ll;
    ll.insertAtHead(130);
    ll.insertAtHead(209);
    ll.display();
    cout<<endl;
    ll.insertAtHead(35);
    ll.insertAtHead(55);
    ll.display();
    cout<<endl;
    ll.insertAtIdx(2,30);
    ll.display();
    cout<<endl;
   
}

