/*
malloc() : malloc stands for memory allocation, it allocates memory dynamically.
- it allocates memory in bytes.
- we have to pass number of bytes we need to allocate dynamiacallu.
- it return NULL in case of fail to allocat memory.
- it allocate contigous number of blocks.
- it return void pointer, so we need to type cast it.
- it is defined inside <stdlib.h> header file.
*/

#include <iostream>
#include<stdlib.h>

using namespace std;

int main() {
    
    int *ptr = (int*)malloc( sizeof(int) * 5 );
    if(ptr != NULL){
        cout << "Memory allocated sucessfully \n";
    }
    else{
        cout << "Fail to allocate: \n";
    }
    int i =0;
    while (i<5)
    {
        int x;
        cout<<"Enter some value: ";
        cin>>x;
        ptr[i]=x;
        i++;
    }
    i=0;
    while(i<5){
        cout<<(ptr[i]);
        i++;
    }
 
    free(ptr);
    delete ptr;
    ptr = NULL; // We need to make ptr Null to avoid it becoming a dangling pointer.

    return 0;
}