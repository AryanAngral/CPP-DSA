#include <iostream>

using namespace std;
#define size 5
class dequeue{

    public:
        int arr[size];
        int f=-1;
        int r=-1;

        bool isEmpty(){
            if(f==-1){
                return true;
            }
            else{
                return false;
            }
        }
        bool isFull(){
            if(f == 0 && r == size-1){
                return true;
            }
            else{
                return false;
            }
        }

        void insertFront(int val){
            if(isFull()){
                return;
            }
            if(isEmpty()){
                f=r=0;
            }
            else if(f==0){
                f = size-1;
            }
            else{
                f--;
            }
            arr[f]=val;
        }

        void insertrear(int val){
            if(isFull()){
                return;
            }
            if(isEmpty()){
                f=r=0;
            }
            else if(r == size-1){
                r=0;
            }
            else{
                r++;
            }
            arr[r]=val;
        }
        void deleteFront(){
            if(isEmpty()){
                cout << "Dequeue is empty!" << endl;
                return;
            }
            if(f == r){ // Only one element
                f = r = -1;
            }
            else if(f == size-1){
                f = 0;
            }
            else{
                f++;
            }
        }
        void deleteRear(){
            if(isEmpty()){
                return;
            }
            if(f==r){
                f=r=-1;
            }
            else if(r==0){
                r=size-1;
            }
            else{
                r--;
            }
        }
        int front(){
            if(isEmpty()){
                cout << "Dequeue is empty!" << endl;
                return -1;
            }
            return arr[f];
        }

        int rear(){
            if(isEmpty()){
                cout << "Dequeue is empty!" << endl;
                return -1;
            }
            return arr[r];
        }

};



int main() {
    
    return 0;
}