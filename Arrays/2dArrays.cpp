#include<iostream>
using namespace std;

bool isPresent(int arr[3][4], int target, int row, int col){

    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            if(arr[row][col]==target){
                return 1;
            }
        }
    }

    else{
        return 0;
    }
}
int main(){

    int target;
    cout<<"Enter target element: ";
    cin>>target;

    if(isPresent(arr,target,3,4)){
        cout<<"Element found";
    }
else{

    cout<<"Element not found";
}

return 0;
}