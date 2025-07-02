//WAP to print students detail (roll no and CGPA), note : initialize  roll and cgpa using constructor and print this detail
#include <bits/stdc++.h>
using namespace std;

class student{
    string roll;
    string cgpa;
    public: 
    
    student(){

        cout<< this<<endl;
    }
    
    student(string r,string n): roll(r), cgpa(n){
        // used initilizer list roll(r) and name(n)
        cout<< this <<endl;
    }
    public: 
    
    void display(){
        cout<<roll<<endl;
        cout<<cgpa<<endl;
    
    }
};

int main(){
    student s1("2022a1r080","9.3");
    s1.display();

    // cout<< &s1<<endl;

    return 0;
    
}