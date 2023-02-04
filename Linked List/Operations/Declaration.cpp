#include<iostream>
using namespace std;

class Node{

    public:
    
    int data;    // Node ke andar ka data
    Node * next;    // Ek pointer Node* naam ka jo next node ko darsha rha hoga


    // Ye node ka constructor hai, jb bhi main me new node create hogi to usme data enter krwa dena and uski next ki value NULL rhne dena
    Node(int data){

        this->data=data;
        this->next=NULL;
    }
};

int main(){

    Node * Node1= new Node(10);       // Node ki declaration
    cout<<Node1->data<<endl;        // Node ke andr ke data ko represent karne ke liye
    cout<<Node1->next;              // Next node ki value darshane ke liye

    return 0;
}