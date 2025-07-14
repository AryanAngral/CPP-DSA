#include <iostream>
#include<stack>
using namespace std;

int main() {
    string x="Hello! how are you";
    stack <char> s;
    for (auto y : x){
        s.push(y);
    }
    while(!s.empty()){
        cout<<s.top();
        s.pop();

    }


    return 0;
}