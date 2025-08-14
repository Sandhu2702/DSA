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
Node* deleteDuplicate(Node* head){
    if(!head || !head->next) return head;
        Node* a= head;
        Node* b= head->next;
        while(b!=NULL){
            while(b!=NULL && b->value==a->value){
                b=b->next;
            }
            a->next=b;
            a=b;
            if(b!=NULL) b=b->next;
        }
    return head;
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
    deleteDuplicate(head);
    printList((head));
    return 0;
    




}