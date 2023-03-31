#include<iostream>
using namespace std;

void reach(int src, int dest){

    // Base case
    if(src==dest){

        cout<<"Reached";
        return;
    }

    // Recursive relation
    reach(src+1, dest);
}

int main(){

    int src=1;
    int dest=10;

    reach(src, dest);
    return 0;
}