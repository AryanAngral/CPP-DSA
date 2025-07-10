#include <iostream>

using namespace std;

class node{
    public:
        int data;
        node* prev;
        node* next;

        node(int d):data(d),prev(NULL),next(NULL){}

};

void insertTail(node *head, int data){
    
    node * newnode = new node(data);
    if(head == NULL){
        head = newnode;
        return;
    }

    node * temp= head;
    
    while (temp->next!=NULL){
        temp=temp->next;
    }
    temp->next= newnode;
    newnode->prev=temp;

}

// void insertHead(node *head, int data){
    
//     node * newnode = new node(data);

//     if(head == NULL){
//         head = newnode;
//         return;
//     }

//     node * temp= head;
    
//     while (temp->prev!=NULL){
//         temp=temp->prev;
//     }
    
//     newnode->next=temp;
//     temp->prev=newnode;

// }

void insertHead(node * &head, int val){
    node* newhead= new node(val);

    if( head == NULL){
        head = newhead;
        return;
    }
    newhead->next = head;
    head->prev = newhead;

    head = newhead;
}

void print(node *head){

    node* temp = head;

    while (temp->prev!=NULL){
        temp=temp->prev;
    }
   
    
    while( temp!=NULL){
        
        cout<<temp->prev<<"\t"<<temp->data<<"\t"<<temp->next<<endl;
        temp=temp->next;
    }
}

void deleteTail(node* head){
    if(head ==NULL){
        cout<<"List empty!"<<endl;
        return;
    }
    node * temp = head;
    while (temp->next!=NULL){
        temp=temp->next;
    }
    
    (temp->prev)->next=NULL;
    delete temp;
}


void printrev(node *head){
    node *temp= head;
    if(temp==NULL)
        return;

        printrev(temp->next);
        cout<<temp->data<<endl;
    
    
}
int main() {
    
    node *n1 =new node(10);

    node *n2 =new node(20);
    n1->next=n2;
    n2->prev=n1;

    node *n3 = new node(30);
    n2->next=n3;
    n3->prev=n2;

    node *n4 = new node(40);
    n3->next=n4;
    n4->prev=n3;

    // printrev(n1);
    insertTail(n1,10);
    print(n1);
    cout<<endl;
    cout<<endl;
    cout<<endl;
    insertHead(n1,20);
    print(n1);
    cout <<endl;
    deleteTail(n1);
    print(n1);

    return 0;
}