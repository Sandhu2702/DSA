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
int main(){
    Node a(10);
    Node b(5);
    Node c(26);
    Node d(16);
    Node e(67);
    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=&e;
    // cout<<((a.next)->value)<<"\n";
    // (a.next)->value=100;
    // cout<<(((a.next)->next)->value)<<"\n";
    // cout<<((((a.next)->next)->next)->value)<<"\n";
    // cout<<(((((a.next)->next)->next)->next)->value)<<"\n";
    Node temp=a;
    while (1){
        cout<<temp.value<<"\n";
        if(temp.next==NULL) break;
        temp=*(temp.next);
    }




}