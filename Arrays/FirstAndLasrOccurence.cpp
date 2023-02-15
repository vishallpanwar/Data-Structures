#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key){

    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int ans=-1;

    while(start<=end){

        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }

        else if(key>arr[mid]){
            start=mid+1;
        }

        else{
            end=mid-1;
        }
        
        mid=(start+end)/2;
    }

    return ans;
}

int lastOcc(int arr[], int size, int key){

    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int ans=-1;

    while(start<=end){

        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }

        else if(key>arr[mid]){
            start=mid+1;
        }

        else{
            end=mid-1;
        }
        
        mid=(start+end)/2;
    }

    return ans;
}

int main(){

    int even[6]={2,6,4,10,4,4};
    cout<<"First occurence of 4 is at index "<<firstOcc(even,6,4)<<endl;
    cout<<"Last occurence of 4 is at index "<<lastOcc(even,6,4);

    return 0;
}