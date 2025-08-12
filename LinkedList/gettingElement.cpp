#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
    Node(int value){
        this->value=value;
        this->next=NULL;
    }
};
class linkedList{
    public:
    Node*head;
    Node* tail;
    int size=0;
    linkedList(){
        head=tail=NULL;
        size=0;
    }
    void insertAtHead(int val){
        Node* temp=new Node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void insertAtEnd(int val){
        Node* temp=new Node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void insertAtIdx(int idx,int value){
        if(idx<0 || idx>size) cout<<"Invalid Index"<<endl;
        else if(idx==0) insertAtHead(value);
        else if(idx==size) insertAtEnd(value);
        else{
            Node* t=new Node(value);
            Node* temp=head;
            for(int i=0;i<idx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;

        }
    }
    int getAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid Index"<<endl;
            return -1;
        }
        else if(idx==0) return head->value;
        else if(idx=size-1) return tail->value;
        else{
            Node* temp=head;
            for (int i=0; i<idx;i++){
                temp=temp->next;
            }
            return temp->value;

        }

    }
    void display(){
        Node* temp= head;
        while(temp!=NULL){
            cout<<temp->value<<" ";
            temp=temp->next;
        }
    }
};
int main(){
    linkedList ll;
    ll.insertAtHead(10);
    ll.insertAtHead(20);
    ll.display();
    cout<<endl;
    ll.insertAtHead(30);
    ll.insertAtHead(50);
    ll.display();
    cout<<endl;
    ll.insertAtIdx(2,90);
    ll.display();
    cout<<endl;
    cout<<ll.getAtIdx(-1);
   
}

