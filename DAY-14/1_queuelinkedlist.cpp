#include <iostream>

using namespace std;

class myQueue{

    public:
        class node{
            public:
                int data;
                node* next;

                node(int val):data(val),next(NULL){}
        };

        void push(int);
        void pop();
        int front();
        node* f=NULL;
        node* r=NULL;
        int rear();

};

void myQueue::push(int val){

    if(f==NULL){
        node* newnode = new node(val);
        f= newnode;
        r=newnode;
    }
    else{
        node* newnode= new node(val);
        r->next=newnode;
        r=newnode;
    }

}

void myQueue::pop(){
    if(f==NULL || r== NULL){
        cout<<"Queue empty"<<endl;
        r= NULL;
        f= NULL;
    }
    else{
        node* temp =f;
        f=f->next;
        delete temp;
    }
}
int myQueue::front(){
    if(f==NULL){
        return -1;
    }
    return f->data;
}
int myQueue::rear(){
    if(r==NULL){
        return -1;
    }
    return r->data;
}

int main() {
    
    myQueue q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);

    cout<<q1.front()<<endl;
    cout<<q1.rear()<<endl;
    q1.pop();
    while (q1.f!=NULL)
    {
        cout<<q1.f->data<<"   ";
        q1.f=q1.f->next;
    }
    

    return 0;
}