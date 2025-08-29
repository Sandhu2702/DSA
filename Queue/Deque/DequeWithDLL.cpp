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
class Deque{
    public:
    Node*head;
    Node* tail;
    int s=0;
    Deque(){
        head=tail=NULL;
        s=0;
    }
    void addBack(int val){
        Node* temp=new Node(val);
        if(s==0){
            head=tail=temp;
        }
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
            
        }
        s++;
    }
    void addFront(int val){
        Node* temp=new Node(val);
        if(s==0){
            head=tail=temp;
        }
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        s++;
    }
        void deleteBack(){
        if(s==0){
            cout<<"Deque is empty"<<endl;
            return;
        }
        else if(s==1){
            deleteFront();
            return;
        }
        Node*temp=tail->prev;
        temp->next=NULL;
        tail=temp;
        s--;
    }
    void deleteFront(){
        if(s==0){
            cout<<"Deque is empty"<<endl;
            return;
        }
        head=head->next;
        head->prev=NULL;
        if(head==NULL) tail=NULL;
        s--;
    }
    int getFront(){
        if(s==0){
            cout<<"List is empty()";
            return -1;
        }
        return head->val;
    }
    int getBack(){//rear
        if(s==0){
            cout<<"List is empty()";
            return -1;
        }
        return tail->val;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
    int size(){
        return s;
    }
    bool empty(){
        if(s==0) return true;
        else return false;
    }
};
int main(){
    Deque dq;
    dq.addBack(10);
    dq.addBack(20);
    dq.addBack(30);
    dq.addBack(40);
    dq.display();
    cout<<endl;
    dq.deleteBack();
    dq.display();
    cout<<endl;
    dq.addFront(0);
    dq.addFront(9);
    dq.display();
    cout<<endl;
    dq.deleteFront();
    dq.display();
    cout<<endl;
    cout<<"Front element: "<<dq.getFront()<<endl;
    cout<<"Back element: "<<dq.getBack()<<endl;
}