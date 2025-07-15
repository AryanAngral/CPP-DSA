#include<iostream>
using namespace std;

#define size 5

template<typename T>


class myStack {
   public:
        T arr[ size ];
        int ptr =-1;

        void push(T);
        void pop();
        T top();
        bool empty();
};

template<typename T>
bool myStack<T>::empty(){

    if (ptr == -1)
        return true;
    else
        return false;

}

template<typename T>
T myStack<T>::top(){

    if (ptr == -1) {
        cout<<"Stack is empty:\n";
        return T(); // or throw an exception if preferred
    }
    return arr[ptr];
}
template<typename T>
void myStack<T>::push(T val){

    if (ptr == size - 1){
        cout<<"Stack is overflow:\n";
        return;
    }

    ptr++;
    arr[ptr] = val;
}
template<typename T>
void myStack<T>::pop(){

    if (ptr == -1){
        cout<<"Stack is underflow:\n";
        return;
    }

    ptr--;
}

int main(){
    myStack<string> s;

    s.push("value");
    s.push("value");
    s.push("value"); 
    s.push("value");
    s.push("value");
    s.push("value"); 

    while( !s.empty()){

        cout<<s.top()<<" ";
        s.pop();
    }


    return 0;
}