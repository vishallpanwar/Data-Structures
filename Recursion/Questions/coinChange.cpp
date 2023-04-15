#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int solve(vector<int> &arr, int target){
     int size=2;
    // Base case
    if(target==0){
        return 0;
    }

    if(target<0){
        return INT_MAX;           // Agar target negative ho gya to hm nhi chahte ki wo return ho kyuki usse ans bn hi nhi skta
    }                             // We want ki mini update na ho, is oliye INT_MAX return krna hai

    // Har ek element ke liye array me jitne bhi elements hai uske liye call ja rhi hai
    // Mtlb array ke hr ek element ko traverse krke function call krdo

    int mini=INT_MAX;
    for(int i=0;i<arr.size();i++){

        int ans=solve(arr, target-arr[i]);   // Ho skta hai ye ans minimum ans ho

        if(ans != INT_MAX)
        mini=min(mini, ans+1);
    }
    return mini;
}

int main(){

    vector<int>arr{1,2};
    int size=2;
    int target=5;

    cout<<solve(arr, target);
    return 0; 
}