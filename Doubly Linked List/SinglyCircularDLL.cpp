#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val= val;
        this->next= NULL;
    }
};
class CircularLL{
    public:
    Node*head;
    CircularLL(){
        head=NULL;
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
        newNode->next = head;
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
    CircularLL ll;
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

