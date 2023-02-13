#include <iostream>
#include <queue>
using namespace std;
int main(){

    queue<int>q;


    // Pushing elements 
    q.push(11); 
    q.push(15);
    q.push(18);



    //Front of queue
    cout<<"Front of queue is: "<<q.front()<<endl;
    



    // Getting queue size
    cout<<"Size of queue is : "<<q.size()<<endl;
    



    // Removing elements
    q.pop();
    cout<<"Size of queue is : "<<q.size()<<endl;



    
    // Checking if the queue is empty or not
    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }

    else{
        cout<<"Queue is not empty"<<endl;
    }




    return 0;
}