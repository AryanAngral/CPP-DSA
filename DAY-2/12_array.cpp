#include<iostream>
using namespace std;

int main(){

    char* ptr[3] = {"We", "are", "coders"}; 
    int i=0;
    while (i<3)
    {
        cout<<*(ptr+i)<<"\t";
        i++;
    }
  cout<<endl;  
    cout<<ptr[0]<<endl;

    cout<<&ptr<<endl;

    return 0;
}