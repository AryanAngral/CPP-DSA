#include <iostream>

using namespace std;

template <typename T, typename U>


auto sum(T a, U b){
    return a+b;
}

// float sum ( float a , float b ){
//     return a+b;
// }
// float sum ( float a , int b ){
//     return a+b;
// }
// float sum ( int a , float b ){
//     return a+b;
// }

int main() {
    
    cout << "Sum: "<< sum(10,10);
    cout << "Sum: "<< sum(10.5f,10.5f);
    

    return 0;
}