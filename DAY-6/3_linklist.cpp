#include <iostream>

using namespace std;

class node 
{
    public:
        int data;
        node *next; // Self referencial pointer

};

void print( node* head ){
    node * temp = head;
     while (temp!=NULL) {
        cout<<temp->data<<" "<<temp->next<<endl;
        temp=temp->next;
    }
}
node* ins(node * head, int y){
    node * temp = head;
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
    return head;
}

int main() {

    node *n1 = new node;
    n1->data = 10;
    // (*n1).next=NULL;
    n1->next = NULL;

    node *n2 = new node;
    n2->data = 20;
    n2->next=NULL;
    n1->next = n2;

    node *n3 = new node;
    n3->data = 30;
    n3->next=NULL;
    n2->next = n3;
    
    // node* head= n1;
    
    //  while (head->next!=NULL) {
    //     cout<<head->data<<endl;
    //     head=head->next;
    // }

    print( n1 );

    // cout <<  (*(n1->next)).data;
    // cout<<head->data;
    node*head=new node;
    head=ins(n1,0);
    print(head);

    return 0;
}