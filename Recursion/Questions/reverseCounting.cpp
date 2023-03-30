#include<iostream>
using namespace std;

int reverse(int n){

    if(n==0)
    return;

    cout<<n<<" ";
    reverse(n-1);
}

int main(){

    int n;
    cout<<"Enter a number : ";
    cin>>n;

    cout<<reverse(n);
    return 0;

}