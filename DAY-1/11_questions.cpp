#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v={1,2,3,4};
    // int sum=INT_MIN; //preprocessor macro 
    // for(auto x:v){
    //     sum+=x;
    // }
    // cout<<"Sum: "<<sum<<endl;

    // int largest=v[0];

    // for(auto x:v){
    //     if(x>largest){
    //         largest=x;
    //     }
    // }
    // cout<<"Largest: "<<largest;

    // for(int i=v.size()-1,j=0;j<i;j++,i--){
    //     swap(v[i],v[j]);
    // }
    // cout<<endl;

    // for(int i=0;i<v.size();i++){
    //     for(int j=i;j<v.size();j++){
    //         for(int k=i;k<=j;k++){
    //             cout<<v[k]<<" ";
    //         }
    //         cout<<endl;
    //     }
    //     cout<<endl;
    // }
    cout<<endl;
    vector<int>v2={2,3,4,5,6};
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v2.size();j++){
            if (v2[j]==v[i]){
                cout<<v2[j];
                v2[j]=INT_MIN;
            }
        }
    }
    return 0;
}