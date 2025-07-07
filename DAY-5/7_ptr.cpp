#include <iostream>
using namespace std;

int main() {
    // const float hello =3.14;
    // const float *helloPtr;
    // helloPtr = &hello;

    // // *helloPtr = 4.12; -Error
    // float bolo = 22.97;
    // helloPtr = &bolo;
    // // *helloPtr = 11.9; - Error


    const float hello =3.14;
    const float *const helloPtr = &hello;

    float bolo = 22.97;
    // helloPtr = &bolo; - Error
;

    return 0;
}