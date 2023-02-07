#include <iostream>
using namespace std;

class Node{

    public:

    int data;
    Node * previous;
    Node * next;

    Node(int data){

        this->data=data;
        this->previous=NULL;
        this->next=NULL;
    }

     ~Node(){
        int value=this->data;
        if(this->next!=NULL){                                      // Destructor for deleting
            delete next;
            this->next=NULL;
        }
        cout<<"Bro aapki memory free ho gayi hai"<<endl;
    }
};



int getLength(Node * head){

    Node * temp=head;
    int len=0;

    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}




void print(Node * head){
    
    Node * temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    cout<<endl;
} 




void insertAtHead(Node * &tail, Node * &head, int data){
    
    if(head==NULL){
        Node * temp=new Node(data);
        head=temp;
        tail=temp;
    }

    else{
        Node * temp=new Node(data);
        temp->next=head;
        head->previous=temp;
        head=temp;
    }
   
}



void insertAtTail(Node * &tail, Node * &head, int data){

    if(tail==NULL){
        Node * temp=new Node(data);
        head=temp;
        tail=temp;
    }

    else{
       
    Node * temp=new Node(data);
    tail->next=temp;
    temp->previous=tail;
    tail=temp;
    }
}



void insertAtPosition(Node * &tail, Node * &head, int position, int data){

    if(position==1){
        
        insertAtHead(tail, head, data);                                          // 1 position me
        return;
    }

     Node * temp=head;
    int count=1;

    while(count<position-1){                                               // Traverse krne ke liye                              
        temp=temp->next;
        count++;
    }

    if(temp->next==NULL){

        insertAtTail(tail, head, data);                                              //Last position me
        return;
    }

    Node * nodeToInsert=new Node(data);                                             // n position
    nodeToInsert->next=temp->next;
    temp->next->previous=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->previous=temp;
}



void deleteNode(int position, Node * &head){

    if(position==1){
        Node * temp=head;
        temp->next->previous=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }

    else{
        Node * current=head;
        Node * previous=NULL;

        int cnt=1;
        while(cnt<position){
            previous=current;
            current=current->next;
            cnt++;
    }

    current->previous=NULL;
        previous->next=current->next;
        current->next=NULL;
        delete current;
    }
}


int main(){

   Node * node1=new Node(10);

   Node * head=node1;
   Node * tail=node1;

   print(head);  

   
   insertAtHead(tail, head, 9);
   print(head);


   insertAtTail(tail, head, 11);
   print(head);

   insertAtPosition(tail, head, 2, 12);
   print(head);


   deleteNode(4, head);
   print(head);

   
   return 0;
}