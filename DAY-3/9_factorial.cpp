#include<iostream>
using namespace std;
int x=1;
int fact(int num){
    if( num == 0 || num == 1){
        return 1;
    }
    return num*fact(num-1);
}

int main(){
    cout<<fact(5);
    return 0;
}
