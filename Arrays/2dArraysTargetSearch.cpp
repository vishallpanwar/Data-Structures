#include <iostream>
using namespace std;


void printSum(int arr[][3], int row, int col){
     for(int row=0;row<3;row++){
         int sum=0;
        for(int col=0;col<3;col++){
            sum+=arr[row][col];
        }

        cout<<sum<<" ";
    }
    cout<<endl;
}

bool isPresent(int arr[][3], int target, int row, int col){
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            if(arr[row][col]==target){
                return 1;
            }
        }
    }
    return 0;
}
int main(){

    int arr[3][3];

    cout<<"Entering the elements"<<endl;
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cin>>arr[row][col];
        }
    }
    
    cout<<"Printing the array"<<endl;
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter element to search: "<<endl;
    int target;
    cin>>target;

    if(isPresent(arr,target,3,3)){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }
    cout<<"sum is: "<<printSum(arr, 3, 3);
    return 0;

}