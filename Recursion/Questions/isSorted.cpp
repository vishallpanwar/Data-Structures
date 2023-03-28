#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){

    // Base case
    if(size==0 || size==1){
        return true;
    }
    
    //Processing
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return isSorted(arr+1, size-1);
    }

    // Recursive call
    isSorted(arr, size);
}

int main(){

    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=10;
    int index=0;

    cout<<isSorted(arr, size);
    return 0;
}