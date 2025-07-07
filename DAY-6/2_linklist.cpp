#include <iostream>

using namespace std;

class node 
{
    public:
        int data;
        node *next; // Self referencial pointer

};

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
    
    node* head= n1;
    
     while (head->next!=NULL) {
        cout<<head->data<<endl;
        head=head->next;
    }
    cout<<head->data;

    return 0;
}