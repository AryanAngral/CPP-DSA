//WAP to take name, roll, cgpa of two students and print it.
//Note: take data using getdata() function and printit using putdata() function.

#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
        string roll;
        string name;
        // char name[80];
        float cgpa;

        void getdata(); //Signature
        void putdata(); //Signature
};

void Student::getdata(){
    // :: Scope resolution operator

    getline(cin,roll);
    getline(cin,name);
    // scanf("%d[^\n]s",name); this is one of the way to to take scentence as input by takin input unlsess a new line has occured
    cin>>cgpa;

    cin.ignore();
    
}
void Student::putdata(){
    cout<<"Name: "<<name<<endl;
    cout<<"Roll No: "<<roll<<endl;
    cout<<"CGPA: "<<cgpa<<endl;
}

int main(){
    Student s1,s2;
    s1.getdata();
    s2.getdata();

    s1.putdata();
    s2.putdata();
    // for(int i=0; i<2;i++){
    //     string a;
    //     string b;
    //     int c;
    //     cin>>a;
    //     cin>>b;
    //     cin>>c;
    //     s1[i].getdata("a","b",c);
        
    // }
    // for(int i=0;i<2;i++){
    //     s1[i].putdata();
    // }
    
    return 0;
}