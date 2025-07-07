#include <iostream>

using namespace std;

class node 
{
    public:
        int data;
        node *next; // Self referencial pointer

};

void print( node* head ){
    if(head==NULL){
        cout<<"Empty";
    }
    else{
    node * temp = head;
     while (temp!=NULL) {
        cout<<temp->data<<" "<<temp->next<<endl;
        temp=temp->next;
    }
    }
}
node* ins(node * head, int y){
    node * temp = head;
    if(head==NULL){
        node * new1= new node;
        int x;
        cout<<"enetr the data for new node";
        cin>>x;
        new1->data=x;  
        new1->next=NULL;
        temp =new1;
        return head;
    }
    else{
    if(y==1){
        while (temp->next!=NULL) {
            temp=temp->next;
        }
        node * new1= new node;
        temp->next=new1;
        int x;
        cout<<"enetr the data for new node";
        cin>>x;
        new1->data=x; 
        new1->next=NULL;
    }
    else{
        node * new1= new node;
        new1->next=head;
        int x;
        cout<<"enetr the data for new node";
        cin>>x;
        new1->data=x;
        return new1;
    }
}

    return head;
}

int main() {

    // node *n1 = new node;
    // n1->data = 10;
    // (*n1).next=NULL;
    // n1->next = NULL;

    
    node*head=new node;

    // head=ins(head,0);
    // head=ins(head,0);
    // head=ins(head,0);
    // head=ins(head,0);
    // head=ins(head,0);
    // head=ins(head,0);



    print(head);

    return 0;
}