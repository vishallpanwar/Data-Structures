#include <iostream>
#include <stack>
using namespace std;


void insertAtottom(stack<int> &st, int element){
    
    if(st.empty()){
        st.push(element);
        return;
    }

    int topele=st.top();
    st.pop();
    insertAtottom(st, element);
    st.push(topele);
}


void reverse(stack<int> &st){

        if(st.empty()){

            return;
        }

        int num=st.top();
        st.pop();
        reverse(st);

        insertAtottom(st, num);
    }


int main(){

    stack<int>st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    reverse(st);

    while(! st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

