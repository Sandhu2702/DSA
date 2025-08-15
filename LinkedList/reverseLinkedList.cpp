#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node*next;
    Node(int value){
        this->value=value;
        this->next=NULL;
    }
};
Node* reverseList(Node* head) {
        Node* prev=NULL, *curr=head, *Next=NULL;
        while(curr){
            Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }
        return prev;
    }
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->value<< " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    Node a(10);
    Node b(10);
    Node c(14);
    Node d(16);
    Node e(19);
    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=&e;
    Node* head=&a;
    Node* head1=reverseList(head);
    printList(head1);
    return 0;
    




}