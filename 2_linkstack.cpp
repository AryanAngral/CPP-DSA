#include"mystacklink.h"

int main(){
    stack  s;
    s.push(1);
    s.push(15);
    s.push(18);
    s.push(12);
    s.push(14);
    s.display();
    s.pop();
    cout<<endl;
    s.display();
    return 0;
}