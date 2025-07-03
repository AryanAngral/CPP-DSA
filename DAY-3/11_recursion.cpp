#include<iostream>
using namespace std;
int nat(int n){
    if(n==1){
        return n;
    }
    return n+ nat(n-1);
}
int main(){
    cout<<" "<<nat(3);
    return 0;
}