#include<iostream>
using namespace std;

int power(int n){

    // Base case
    if(n==0)
    return 1;
    
    // Recursive call
    return 2 * power(n-1);
}

int main(){

    int n;
    cout<<"Enter a number : ";
    cin>>n;

    cout<<power(n);
    return 0;

}