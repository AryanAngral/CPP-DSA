#include<iostream>
using namespace std;

void func(int num){
    num=10;
}
void funcc(int* num){
    *num=10;
}
void func1( int &num ){
    num = 10;
}
int main(){
    
    int num = 20;

    cout<< num << endl;
    func( num ); //call by  value
    cout << num << endl;

    funcc( &num ); // call by reference
    cout << num;

    return 0;
}