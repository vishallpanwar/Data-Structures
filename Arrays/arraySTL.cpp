#include<iostream>
#include <array>
using namespace std;

int main(){

    int even[4]={2,4,6,8};
     
    array<int, 4> a={1,2,3,4};
    int size=a.size();

    for(int i=0;i<size;i++){

        cout<<a[i]<<endl;
    }

    cout<<"element at third index is "<<a.at(3)<<endl;

    cout<<"Empty or not --> "<<a.empty()<<endl;

    cout<<"First element of array is "<<a.front()<<endl;

    cout<<"Last element of array is "<<a.back()<<endl;

    return 0;
}