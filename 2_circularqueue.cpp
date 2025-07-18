#include <iostream>

using namespace std;

# define size 10
class myQueue{

    public:
        int f = -1;
        int r = -1;
        int arr[size];

        bool isEmpty(){
            if(f==-1){
                return true;
            }
            else{
                return false;
            }
        }
        bool isFull(){
            if((r+1)%size==f){
                return true;
            }
            else{
                return false;
            }
        }

        void push(int);
        void pop();
        int front();
        int rear();

};


void myQueue::push(int val){
    if(isFull()){
        cout<<"Queue is full ! "<<endl;
        return;
    }
    if(isEmpty()){
        f=r=0;

    }
    else{
        r= (r+1)%size;
    }
    arr[r] = val;
}
void myQueue::pop(){

    if(f==-1|| r==-1){
        cout<<"Queue empty"<<endl;
    }
    else{
        f++;
    }

}


int main() {
    
    return 0;
}