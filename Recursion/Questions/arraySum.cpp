#include<iostream>
using namespace std;

int arrSum(int arr[], int size){

    // Base case
    if(size==0)
    return 0;

    if(size==1)
    return arr[0];

    // Recursive call
    return arr[0] + arrSum(arr+1, size-1);
}

int main(){

    int arr[]={1,2,3,4};
    int size=4;
    

    cout<<arrSum(arr, size);
    return 0;
}