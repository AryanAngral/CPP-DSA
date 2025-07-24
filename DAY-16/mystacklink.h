#include<iostream>
using namespace std;

class stack {

    public:

        class node{
            public:
                int data;
                node* next;
                node* prev;
                node(int val):data(val),next(NULL),prev(NULL){}
        };


        node* top;
        stack(): top(NULL){} // constructor of class stack
        void push(int);
        void pop();
        int topEle();
        void display();
        bool empty();

};

void stack::push(int d){
    if(top ==NULL){
        node* newnode = new node(d);
        top = newnode;
        return;
    }
    else{
        node * newnode = new node(d);
        // top->next =newnode;
        newnode->prev= top;
        top = newnode;
        return;
    }
}
void stack::pop(){
    if(top==NULL){
        cout<<"Underflow"<<endl;
    }
    else{
        // Correction: Need to delete the removed node to avoid memory leak
        node* temp = top;
        top = top->prev;
        delete temp;
    }
}
int stack:: topEle(){
    return (top==NULL)? -1:top->data;
}
void stack ::display(){
    // Correction: Do not modify or delete the stack while displaying
    node* temp = top;
    while(temp != NULL){
        cout << temp->data << "\t";
        temp = temp->prev; // Traverse using prev to show stack from top to bottom
    }
    cout << endl;
}

bool stack::empty(){
    if(top==NULL){
        return true;
    }
    else{
        return false;
    }
}
