#include <iostream>

using namespace std;

class Data{

    public:
        void Greet(){
            cout<<"Hello, Bolo..";
        }
        void negGreet(void);

};

void Data::negGreet(){
    cout<<"hello, mat bolo..";
}

int main() {
    Data acc;  //Default Constructor
    acc.Greet();
    cout<<endl;
    acc.negGreet();  
    return 0;
}