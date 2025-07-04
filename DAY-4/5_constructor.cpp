#include <iostream>

using namespace std;

class Data{
    private:
        int age;
        string name;
    public:
        // Data(){
        //     cout<<"Hello, Bolo.."<<endl;
        // }
        // Data(int a, string n = "Good People"): age(a),name(n){}

        void getData(void){
            cout<<"name : "; cin>>name;
            cout<<"age  : "; cin>>age;

        }
        void Print(void);

};
void Data::Print(){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}

int main() {
    // Data acc;
    // acc.Print();
    // Data ac(20, "Aryan");
    // ac.Print();
    Data acc;
    acc.getData();
    acc.Print();
    return 0;
}