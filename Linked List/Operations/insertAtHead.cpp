#include <iostream>
using namespace std;

class Node{

    public:

    int data;
    Node * next;

    Node(int data){

        this->data=data;
        this->next=NULL; 
    }
};

insertAtHead(Node * &head, int data){

    Node * temp=new Node(data);
    temp->next=head;
    head=temp; 
}


void print(Node * &head){

    Node * temp=head;

    while(temp!=NULL){

       cout<<temp->data<<" ";
       temp=temp->next;
    }

    cout<<endl;
}

int main(){

    Node * node1= new Node(10);
    
    Node * head=node1;

    Node * tail=node1;
    
    print(head);
    insertAtHead(head, 11);
    print(head);

    return 0;
}