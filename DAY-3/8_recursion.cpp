#include<iostream>
using namespace std;
int x=1;
void func(int y){
    if( x>=11){
        return;
    }
    cout<<y<<"X"<<x<<"="<<x*y<<"\n";
    x++;
    func(y);

}

int main(){
    func(10);
    return 0;
}
