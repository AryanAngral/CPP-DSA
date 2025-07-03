#include<iostream>
using namespace std;
int num = 0;
void func(){

    if( num ==5 ) //base case
    {
        return;
    }
    
    cout <<"Hello world!" << num ;

    num++;

    func();

}

int main(){
    
    func();

    return 0;
}