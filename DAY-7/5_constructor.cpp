#include <iostream>

using namespace std;

class btech{

    public:
        int roll;  // data members
        float cgpa;

        btech(){} // do nothing constructor

        btech(int r, float f):roll(r), cgpa(f){}
        btech( btech &obj){
            this->roll = 80;
            this->cgpa = 9.22;
            cout<<"HI";
        }

};

int main() {
    
    btech s1, s2(80,9.22);
    cout<<"Roll: "<<s2.roll<<endl;
    cout<<"Cgpa: "<<s2.cgpa<<endl;

    // btech s3(s2);
    // btech s3 ={s2};
    btech s3 = s2;
    cout<<"Roll: "<<s3.roll<<endl;
    cout<<"Cgpa: "<<s3.cgpa<<endl;

    btech s4;
    s4=s2;

    return 0;
}