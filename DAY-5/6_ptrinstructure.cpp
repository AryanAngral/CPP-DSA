#include <iostream>

using namespace std;

struct Data{

    int a;
    int *p;

} *x;

int main() {
    x =new Data;
    x -> a = 10;
    x -> p = &(x -> a);
    cout << x -> p <<"\t"<<x ->a;
    delete x;


    return 0;
}