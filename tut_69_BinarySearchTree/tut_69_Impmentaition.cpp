#include <iostream>
using namespace std;

// Creating a tree node 
class Node{
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
}

// inserting a data into a binary serach tree 
Node* insertIntoBST(Node* &root,int data){
    //Base case
    if(root == NULL){
        root = new Node(data);
        return root;
    }

    if(root->data < data){
        //insert at right
        root->right = insertIntoBST(root->right,data);
    }
    else {
        //insert at left
        root->left = insertIntoBST(root->left,data);
    }
    return root;
}

//Take input and 
void takeInput(Node* &root){
    int data;
    cin >> data;

    while(data != -1){
        insertIntoBST(root,data);
        cin >> data;
    }
}

int main(){

    //Initialzie the object
    Node* root = NULL;

    //take input and insert into bst
    takeInput(root);
    

    return 0;
}