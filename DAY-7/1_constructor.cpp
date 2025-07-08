#include <iostream>

using namespace std;


class btech{

    public:
        int roll;
        float cgpa;

        btech(){
            cout<<"I am default constructor \n";
        }

};

int main() {
    
    btech vansh,  riya, arjun;
    btech *s1 = new btech;

    return 0;
}