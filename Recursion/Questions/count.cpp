#include <iostream>
using namespace std;

void count(int n){
    
    // Base case
    if(n==0){
        return;
    }

    // Recursive relation
    count(n-1);

    //Processing
    cout<<n<<" ";

}

int main(){

    int n;
    cout<<"Enter value of n : ";
    cin>>n;

    count(n);

    return 0;
}