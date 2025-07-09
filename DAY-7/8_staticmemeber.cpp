#include <iostream>

using namespace std;

class btech{

    public:
        int nonStatic;
        static int staticVar; // static variable;

        btech():nonStatic(10){}

        static void staticFunc(){

            cout << "I am static Method"<<endl;
            cout << "Static var:  "<< staticVar; //2
            // cout << "Non statuc var: "<< nonStatic<<endl;

        }

        void nonStaticFunc(){
            cout << "I am non-static Method"<<endl;
            cout << "Static var:  "<< staticVar<<endl; //2
            cout << "Non statuc var: "<< nonStatic<<endl;
        }

};
// void btech::staticFunc();
int btech::staticVar = 2; //global initialization is mendatory


int main() {
    
    // btech s1, s2;

    // s1.nonStaticFunc();
    // s1.staticFunc();

    btech::staticFunc();
    

    return 0;
}