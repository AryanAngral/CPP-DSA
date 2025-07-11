#include <iostream>

using namespace std;

class node{

    public:
        int data;
        node* next;
        node* prev;

        node(int d):data(d),next(NULL),prev(NULL){}

};

void print(node * head){
    node* temp= head;
    if(temp==NULL){
        cout<<"Empty!"<<endl;
        return;
    }
    // if(temp->next=temp){
    //     cout<<temp->data<<endl;
    //     return;
    // }
    while (temp->next!=head)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}

void insertTail(node* &head, int data){
    // node* temp= head;
    //  while (temp->next!=head)
    // {
    //     temp=temp->next;
    // }
    node* newnode= new node(data);
    if(head == NULL){
        newnode->prev = newnode;
        newnode->next =newnode;
        return;
    }
    head->prev->next=newnode;                                                                                                                       
    newnode->prev =head->prev;
    newnode->next= head;
    // if(head->next = head->prev){
    //     head->next = newnode;
    // }
    head->prev = newnode;


}

void insertHead(node *&head , int data){
    node * newnode = new node(data);
    node* temp = head;
    newnode->next=temp;
    newnode->prev=temp->prev;
    temp->prev= newnode;
    head= newnode;

}

int main() {
    
    node* head = new node(10);
    head -> prev = head;
    head -> next = head;

    node* n2 = new node(20);
    n2 -> next = head;
    n2 -> prev = head;
    head -> next = n2;
    head -> prev = n2;

    node* n3 = new node(30);
     n3 -> next = head;
    n3 -> prev = n2;
    n2 -> next = n3;
    head -> prev = n3;

    node* n4 = new node(40);
    n4 -> next = head;
    n4 -> prev = n3;
    n3 -> next = n4;
    head -> prev = n4;

    print(head);

    cout<<endl;
    cout<<endl;
    insertTail(head,20);
    print(head);
    
    cout<<endl;
    insertHead(head,1);
    print(head);

    return 0;
}