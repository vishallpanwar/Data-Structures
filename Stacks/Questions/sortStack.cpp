#include<iostream>
#include<stack>
using namespace std;

void insertSorted(stack<int> &st, int target){

    if(st.empty()){
        st.push(target);
        return;
    }

    // Base case
    if(st.top()>=target){
        st.push(target);
        return;
    }

    int num=st.top();
    st.pop();

    insertSorted(st, target);
    st.push(num);
}


void sortStack(stack<int> &st){
    
    if(st.empty()){
        return;
    }

    int num=st.top();
    st.pop();

    sortStack(st);

    insertSorted(st, num);
}

int main(){

    stack<int> st;

    st.push(7);
    st.push(11);
    st.push(3);
    st.push(5);
    st.push(9);

    sortStack(st);

    // Printing
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }


}