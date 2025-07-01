//WAP to print students detail (roll no and CGPA), note : initialize  roll and cgpa using constructor and print this detail
#include <bits/stdc++.h>
using namespace std;

class student{
    string roll;
    string name;
    public: 
    
    student(){

        cout<< this<<endl;
    }
    
    student(string r,string n): roll(r), name(n){
        // used initializer list roll(r) and name(n)
        cout<< this <<endl;
    }
    public: 
    
    void display(){
        cout<<roll<<endl;
        cout<<name<<endl;
    
    }
};

int main(){
    student s1("2022a1r080","Aryan Angral");
    s1.display();

    // cout<< &s1<<endl;

    return 0;
    
}