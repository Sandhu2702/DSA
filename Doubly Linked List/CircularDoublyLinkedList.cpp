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
class CircularDLL{
    public:
    Node*head;
    Node*tail;
    CircularDLL(){
        head=NULL;
        tail= NULL;
    }
    void insert(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            newNode->next = head; // point to itself
            return;
        }

        Node* temp = head;
        while (temp->next != head) {  // traverse till last node
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev=temp;
        newNode->next = head;
        head->prev= newNode;
        tail=newNode;
    }
    void display() {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    Node* temp = head;
    do {
        cout << temp->val << " ";
        temp = temp->next;
    } while (temp != head);

    cout << "(back to head)" << endl;
}

};
int main(){
    CircularDLL ll;
    ll.insert(130);
    ll.insert(209);
    ll.display();
    cout<<endl;
    ll.insert(35);
    ll.insert(55);
    ll.display();
    cout<<endl;
    ll.insert(2);
    ll.display();
    cout<<endl;
   
}

