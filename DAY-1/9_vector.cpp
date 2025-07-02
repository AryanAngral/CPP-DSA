/* Vector:
    In C++ Dynamic array is implemented using the std::vector container from Standard Template Library(STL) 
    
    We can change the size of vector during runtime.

    Important functions:
        1. push_back()

        2. pop_pack()

        3. size()

        4. empty()

        5. clear()

        6. at()

        7. front()

        8. back()

        9. begin()

        10. end()

        11. erase()

        12. insert()


*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    v.push_back(70);

    while( ! v.empty() ){
        cout<<v[v.size()-1]<<" ";
        v.pop_back();
    }

   
    return 0;
    
}