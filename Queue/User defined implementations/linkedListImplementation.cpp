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
class Queue{
    public:
    Node*head;
    Node* tail;
    int s=0;
    Queue(){
        head=tail=NULL;
        s=0;
    }
    void enqueue(int val){//push()
        Node* temp=new Node(val);
        if(s==0){
            head=tail=temp;
        }
        else{
            tail->next=temp;
            tail=temp;
        }
        s++;
    }
    void dequeue(){//pop()
        if(s==0){
            cout<<"List is empty"<<endl;
            return;
        }
        head=head->next;
        s--;
    }
    int front(){
        if(s==0){
            cout<<"List is empty()";
            return -1;
        }
        return head->value;
    }
    int back(){//rear
        if(s==0){
            cout<<"List is empty()";
            return -1;
        }
        return tail->value;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->value<<" ";
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
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(70);
    q.display();
    cout<<endl;
    q.enqueue(50);
    q.enqueue(60);
    q.dequeue();
    q.display();
    cout<<endl;
    cout<<"Front element: "<<q.front()<<endl;
    cout<<"back element: "<<q.back()<<endl;
}

