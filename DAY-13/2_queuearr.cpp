#include <iostream>
#define size 5
using namespace std;

class myQueue{

    public:
        int arr[size];
        int f;
        int r;

        myQueue(): f(-1), r(-1){} 

        void push(int);
        void pop();
        bool empty();
        int front();
        int back();
};

void myQueue::push(int d){
    if(r < size - 1){
        r++;
        arr[r] = d;
        if(f == -1) f = 0; // Set front on first push
    }
    else{
        cout << "Queue full!" << endl;
    }
}

void myQueue::pop(){
    if(empty()){
        cout << "queue empty" << endl;
    }
    else{
        f++;
        if(f > r){ // Reset when queue becomes empty
            f = -1;
            r = -1;
        }
    }
}

bool myQueue::empty(){
    // Queue is empty if f == -1 or f > r
    if(f == -1 || f > r){
        return true;
    }
    else{
        return false;
    }
}

int myQueue::front(){
    if(empty()){
        cout << "queue empty" << endl;
        return -1;
    }
    return arr[f];
}

int myQueue::back(){
    if(empty()){
        cout << "queue empty" << endl;
        return -1;
    }
    return arr[r];
}

int main() {
    myQueue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60); // Should show 'Queue full!'

    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    q.pop(); // Should show 'queue empty'

    return 0;
}
