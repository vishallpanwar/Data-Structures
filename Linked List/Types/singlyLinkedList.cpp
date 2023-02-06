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

    ~Node(){
        int value=this->data;
        if(this->next!=NULL){                                      // Destructor for deleting
            delete next;
            this->next=NULL;
        }
        cout<<"Bro aapki memory free ho gayi hai"<<endl;
    }
    
};



   
   void insertAtHead(Node * &head, int data){

    Node * temp=new Node(data);                                    // Inserting at head
    temp->next=head;
    head=temp;
   }




   void insertAtTail(Node * &tail, int data){
    Node * temp=new Node(data);                                     // Inserting at tail
    tail->next=temp;
    tail=temp;
   }



   void insertAtPosition(Node * &tail, Node * &head, int position, int data){


     Node * nodeToInsert=new Node(data);

    
    if(position==1){
        insertAtHead(head, data);                                           // 1 position par
        return;
    }

    // Traverse krne ke liye
    Node* temp=head;
    int count=1;

    while(count<position-1){
        temp=temp->next;
        count++;
    }
    nodeToInsert->next=temp->next;                                           // nth position par
    temp->next=nodeToInsert;



    if(temp->next==NULL){
       insertAtTail(tail, data);
    }

   }




   void deleteNode(int position, Node * &head){
    
    if(position==1){

        Node * temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }

    else{

         Node * curr=head;
         Node * prev=NULL;
         int count=1;

         while(count<position){
            prev=curr;
            curr=curr->next;
            count++;
         }

         prev->next=curr->next;
         curr->next=NULL;
         delete curr;
    }
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

    Node * node1=new Node(10);
    cout<<node1->data<<endl;



    Node * head=node1;
    insertAtHead(head, 9);
    print(head);


    Node * tail=node1;
    insertAtTail(tail, 11);
    print(head);


    insertAtPosition(tail, head, 1, 8);
    print(head);


    insertAtPosition(tail, head, 3, 7);
    print(head);


    insertAtPosition(tail, head, 6, 12);
    print(head);

    deleteNode(6, head);
    print(head);



    return 0;
}