#include <iostream>

using namespace std;

struct Data{

    int a;
    float b;

};

struct Data *p;

int main() {
    // p = malloc(sizeof(int));

    p = (struct Data*)malloc(sizeof(struct Data));
    (*p).a =10;
    p->b = 12.4;

    cout<< p->a <<" "<< p->b<<endl;
    delete p;
    return 0;
}