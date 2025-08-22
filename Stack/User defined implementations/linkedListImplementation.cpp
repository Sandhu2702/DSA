#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class Stack{
    Node* head;
    int size=0;
    public:
    Stack(){
        head=NULL;
        size=0;
    }
    void push(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=newNode;
        }else{
            newNode->next=head;
            head=newNode;
        }
        size++;
    }  
    void pop(){
        if(head==NULL) return;
        head=head->next;
        size--;
    }
    void top(){
        if(head==NULL){
            cout<<"Stack is empty"<<endl;
            return;
        }
        cout<<head->data<<endl;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    void print(Node* temp){
        if(temp==NULL) return;
        print(temp->next);
        cout<<temp->data<<" ";
    }
    void displayRev(){
        Node* temp=head;
        print(temp);
        cout<<endl;
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<"Top element: ";
    st.top();
    st.pop();
    cout<<"Top element after pop: ";
    st.top();
    cout<<endl;
    cout<<"stack elements: "<<endl;
    st.display();
    cout<<endl;
    st.displayRev();
}