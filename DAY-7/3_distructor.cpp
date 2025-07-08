#include <iostream>

using namespace std;


class btech{

    public:
        int roll;
        float cgpa;
        btech(int r):roll(r){
            cout<<"Constructor haveing one parameter \n";
        }
        btech(int r, float c): roll(r),cgpa(c){
            cout<<"Constructor having two parameter\n";
        }
        ~btech(){
            cout<<"Distructor is called \n";
        }

};

int main() {
    btech s2(80);
    btech s1(80,9.22);

    return 0;
}