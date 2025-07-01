#include <iostream>

#pragma pack(1)
using namespace std;
class btech{
    // int roll;
    // double cgpa;
    // char section;
    //pading - in this process allocate the memory which is sometimes already which is not in need is adjusted for next memory if not occupied 
    // int x;

    char name[11];
    double roll;
    char x1;

};
int main(){
    btech s1;
    cout<<sizeof(s1);
    //memory allocated is the mustiple of the bigest data type 
    return 0;
}