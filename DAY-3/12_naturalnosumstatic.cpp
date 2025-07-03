#include<iostream>
using namespace std;
int nat(int n){
    static int s = 0;

    if( nat == 0 ){
        cout<<"Sum is: "<<s;
        return;
    }
    s += n;
    nat( n-1);
}
int main(){
    cout<<" "<<nat(3);
    return 0;
}