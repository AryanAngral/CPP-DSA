#include <iostream>

using namespace std;

class btech{

    public:
        int sweetes;
        static int stv; // static variable;

};

int btech::stv = 2; //global initialization is mendatory


int main() {
    
    btech s1, s2;

    s1.stv =3;

    cout << s1.stv << endl;
    cout << s1.stv << endl;

    return 0;
}