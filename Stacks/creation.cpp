#include <iostream>
using namespace std;
#include <stack>

int main(){

    // Stack create krne ke liye
    stack<int>s;

    // Elements daalne ke liye (bottom)
    s.push(2);
    s.push(3);

    // Element remove krne ke liye (top one)
    s.pop();
    
    cout<<"Printing top element : "<<s.top()<<endl;

    // Checking if the stack is empty or not
    if(s.empty())
        cout<<"Empty hai bhai"<<endl;

    else 
    cout<<"Not empty"<<endl;

    // Size check
    cout<<"Size of stack is : "<<s.size()<<endl;

    
    return 0;
}