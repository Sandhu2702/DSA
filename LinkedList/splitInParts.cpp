#include<iostream>
#include<vector>
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
    void display(){
        Node* temp= head;
        while(temp!=NULL){
            cout<<temp->value<<" ";
            temp=temp->next;
        }
    }
};
vector<Node*> splitListToParts(Node* head, int k) {
        Node* temp=head;
        int n=0;
        while(temp!=NULL){
            temp=temp->next;
            n++;
        }
        //breaking the list into k lists
        vector<Node*>ans;
        int sizePart=n/k;
        int rem=n%k;
        temp=head;
        while(temp!=NULL){
            Node* c=new Node(10);
            Node* tempC=c;
            int s=sizePart;
            if(rem>0) s++;
            rem--;
            for(int i=1;i<=s;i++){
                tempC->next=temp;
                temp=temp->next;
                tempC=tempC->next;
            }
            tempC->next=NULL;
            ans.push_back(c->next);
        }
        if(ans.size()<k){
            int extra=k-ans.size();
            for(int i=1;i<=extra;i++){
            ans.push_back(NULL);
            }
        }
        return ans;
    }
    int main(){
    linkedList ll;
    ll.insertAtHead(10);
    ll.insertAtHead(20);
    ll.insertAtHead(30);
    ll.insertAtHead(50);
    ll.insertAtIdx(2,90);
    ll.display();
    cout<<endl;
    vector<Node*> parts=splitListToParts(ll.head, 3);
    for(int i=0;i<parts.size();i++){
        Node*temp=parts[i];
        while(temp!=NULL){
            cout<<temp->value<<" ";
            temp=temp->next;
        }
    }
    
}

