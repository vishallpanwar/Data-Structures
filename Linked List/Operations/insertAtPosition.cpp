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

void insertAtTail(Node * &tail, int data){
    Node * temp=new Node(data);

    tail->next=temp;
    tail=temp;
}

void insertAtPosition(Node * &head, int position, int data){
    
    Node * temp=head;
    int cnt=1;

    while(cnt<position-1){
  
        temp=temp->next;
        cnt++;
    }

    // Ab d ke liye ek node bana do
    Node * nodeToInsert= new Node(data);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
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
    
    print(head);
    insertAtTail(tail, 16);
    print(head);

    insertAtPosition(head, 3, 22);
    print(head);
    
    return 0;
}