/*
Copy Constructor: A constructor that creates a new object as a copy of an existing object. It takes a reference to an object of the same class as a parameter.
- A special type of constructor , which creates a copy of an existing object.

1. Default copy constructor - whenever we create a copy of an object , compile will automatically create a copy using reference.

2. Custom copy constructor - 

*/

#include <iostream>
using namespace std;

class Data{

    public:
        string name;
        int age;

        Data(string name, int age){
            this -> name = name;
            this -> age = age;

        }
        // Custom Copy Constructor
        Data(Data &d){
            // &d is reference object
            this ->  name = d.name;
            this ->  age  = d.age;
            
        }
        void printDetails(void){
            cout << "Name: " << name << endl;
            cout << "Age : " << age << endl;
        }

};

int main() 
{
    Data M1("Aryan",20);
    M1.printDetails();

    Data M2(M1);            // Default Copy Constructor
    M2.printDetails();

    // Data M2 = M1;
    // cout << M2.age;



    return 0;
}