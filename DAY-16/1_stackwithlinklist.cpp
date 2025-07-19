#include <iostream>

using namespace std;

class ring{

    public:
        class node{
            public:

            int data;
            node* next;

            node(int val): data(val), next(NULL){}

        };

        node* top = NULL;

        void push(int val){

            node* newnode = new node(val);

            newnode->next = top;
            top = newnode;

        }

        void pop(){

            if( top == NULL ){

                cout << "No element inside hanoi\n";
                return;

            }

            node* temp = top;
            top = top->next;
            delete temp;

        }

        void display(){
            if( top == NULL ){
                cout << "No element "<<endl;
                return;
            }

            while(top!=NULL){
                cout<<top->data<<"   ";
                top=top->next;
            }

        }

        int top(){
            if(top==NULL){
                cout<<"Empty";
                return;
            }
            return top->data;

            return top==NULL? -1:top->data;
        }

};

int main() {
    ring r1;
    r1.push(2);
    r1.push(2);
    r1.push(2);
    r1.push(2);
    r1.push(2);
    r1.push(2);
    r1.push(2);
    r1.push(2);

    r1.display();
    return 0;
}