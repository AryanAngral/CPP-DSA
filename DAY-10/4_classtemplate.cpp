#include <iostream>

using namespace std;

template <class T, class U>

class info{
    public:
        T aa;
        U bb;

        info(T a, U b):aa(a),bb(b){}

        void print(){
            cout <<  aa <<endl<< bb<<endl;
        }
};

int main() {
    info <int,int> obj1(12,15);
    obj1.print();
    
    return 0;
}