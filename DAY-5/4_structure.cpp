#include <iostream>

using namespace std;

struct Data
{
    int a;
    double b;
};

struct Data acc[5];

int main() {
    // acc.a = 10;
    // acc.b = 13.23;
    // cout<<acc.a;
    int x;
    double y;
    for(int i = 0; i < 5; i++){
        cin >> x;
        cin >> y;
        acc[i].a =x;
        acc[i].b =y;

    }

    return 0;
}