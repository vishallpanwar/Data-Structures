#include <iostream>
using namespace std;
#include <stack>


class Stack{
    
    public: 

    // Elements
    int *arr;
    int top;
    int size;

    Stack(int size){

        this->size=size;
        arr=new int[size];
        top=-1;
    }



    void push(int element){
   
        if(size-top>1){
           top++;
           arr[top]=element;
        }

        else{
             cout<<"Stack overflow"<<endl;
        }
    }


    
    void pop(){

        if (top>=0){
        top--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }



    int peak(){
       if(top >= 0){
       return arr[top];
       }
       else{
        cout<<"Stack is empty"<<endl;
        return -1;
       }
    }



    bool isEmpty(){
    
        if(top==-1){
        return true;
        }

        else{ 
        return false;
        }
    }
};
int main(){

        Stack st(5);
       
        st.push(22);
        st.push(43);
        st.push(44);
        st.push(15);
        st.push(18);
        st.push(10);

        cout<<st.peak()<<endl;

        st.pop();
        cout<<st.peak()<<endl;

        st.pop();
        cout<<st.peak()<<endl;

        st.pop();
        cout<<st.peak()<<endl;

        if(st.isEmpty()){
            cout<<"Empty hai"<<endl;
        }

        else 
        cout<<"Empty nahi hai"<<endl;
    
    return 0;
}