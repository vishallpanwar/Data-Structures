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
        if(this->next!=NULL){
            delete next;
            this->next==NULL;
        }

        cout<<"Memory free with data "<<value<<endl;
    }
};



void insertAtHead(Node * &head, int data){

    Node * temp= new Node(data);
    temp->next=head;
    head=temp;
}



void insertAtTail(Node *&tail, int data){

    Node * temp=new Node(data);

    tail->next=temp;
    tail=temp;;
}


void insertAtPosition(Node * &head, Node * &tail, int position, int data){
           
        Node * nodeToInsert= new Node(data);

       
        if(position==1){
            insertAtHead(head, data);                                            // Agar 1 position me daalna hai
            return;
        }   



        // Traverse krne ke liye  
        Node * temp=head;                                                       // Agar n position me daalna hai
        int count=1;

        while(count<position-1){
            temp=temp->next;
            count++;
        }
        nodeToInsert->next=temp->next;
        temp->next=nodeToInsert;



        
        if(temp->next==NULL){
            insertAtTail(tail, data);                                              //Last position me
            return;
        }
}
   

void deleteNode(int position, Node * &head){

    // 1 node ko delete krne ke liye
    if(position==1){

        Node * temp=head;
        head=head->next;

        // Memory delete krwane ke  liye destructor call krna pdega
        temp->next=NULL;
        delete temp;
    }
    
    // End ya bich ki node ko del krne ke liye
    else{
           Node * current=head;
           Node * previous=NULL;

           int count=1;

           while(count<=position){
                 previous=current;
                 current=current->next;
                 count++;
           }

           previous->next=current->next;
           current->next=NULL;
           delete current;

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
   // cout<<node1->data<<endl;
    //cout<<node1->next<<endl;

    // Head ke liye
    Node * head=node1;
    insertAtHead(head, 11);
    print(head);

    // Tail ke liye
    Node * tail=node1;
    insertAtTail(tail, 12);
    print(head);

    // 1 posotion ke liye
    insertAtPosition(head, tail, 3, 22);
    print(head);

    deleteNode(2, head);
    print(head);

    return 0;
}