#include <iostream>

using namespace std;


class btech{

    public:
        int roll;
        float cgpa;

        btech(int r, float c): roll(r),cgpa(c){
            
        }

};

int main() {
    
    btech s1(80,9.22);

    return 0;
}