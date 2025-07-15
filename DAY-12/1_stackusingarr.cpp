#include<iostream>
#include"mystack.h"

int main(){
    myStack<string> s;

    s.push("value");
    s.push("value");
    s.push("value"); 
    s.push("value");
    s.push("value");
    s.push("value"); 

    while( !s.empty()){

        cout<<s.top()<<" ";
        s.pop();
    }


    return 0;
}