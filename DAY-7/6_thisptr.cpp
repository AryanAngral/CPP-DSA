#include <iostream>

using namespace std;

class btech{

    public:
        int roll;
        float cgpa;

        btech():roll(80),cgpa(9.22){}

        void print(){
            cout << "ADDERESS USING THIS KEYWORD : "<<this<<endl;
        }

};

int main() {
    btech s1;
    cout<<"Address of s1 : "<<&s1<<endl;
    s1.print();

    return 0;
}