#include <iostream>
#include <queue>
using namespace std;

// Node class jisme root node ka data aur left & right nodes hai
class node {
    public:
        int data;
        node* left;
        node* right;

    node(int d) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* root) {

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);    

    if(data == -1) {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;

}



void levelOrderTraversal(node * root){

    queue<node*> q;
    q.push(root);

    while(!q.empty()){

        node * temp=q.front();
        cout<<temp->data<<" ";
        q.pop();

        
        // Agar temp NULL aa gya to purana level complete ho chuka hai
        if(temp==NULL){
            cout<<endl;
            
            // Agar queue empty nahi hai then it still have some child nodes to usme bhi NULL value daal do
            if(!q.empty()){
                q.push(NULL);
            }

            else{
                if(temp->left){
                  q.push(temp->left);
        }

        if(temp->right){
            q.push(temp->right);
        }
            }
        }


       
    }
}



int main(){

    node * root=NULL;

    // Calling a function to create a tree
    root=buildTree(root);

    cout<<"Printing level order traversal elements : ";
    levelOrderTraversal(root);
}