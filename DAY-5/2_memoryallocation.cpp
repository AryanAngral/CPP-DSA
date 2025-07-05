#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
    
    int* p;
    // p = (int*)malloc(sizeof(int) * 1);
    p = new int;
    *p = 40;
    // printf("%d\n",*p);
    // free(p);
    cout << *p << endl;
    delete p;
    return 0;
}


// If we loose acces to the pointer then there will be no access to the memory space.
// Also NO access to the data.
// No one can use that memory space and resize
// 4 byte of space will be wasted which will cause memory leak