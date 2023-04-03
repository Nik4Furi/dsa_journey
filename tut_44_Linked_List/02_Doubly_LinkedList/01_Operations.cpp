#include <iostream>
using namespace std;

// ------------ Creating a Doubly Linked List -----------X
class DNode{

    public:
    int data;
    DNode* prev;
    DNode* next;

    //constructor to inserting a new node
    DNode(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

// --------------- Print Specific Stuff --------X
void print(DNode* head){
    DNode* temp = head;
    cout << endl << endl << "Printing the Doubly Linked List "<< endl;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }

}

// -------- Insertion Specific Stuff -------------X
void insertAtHead(DNode*& head,DNode*& tail,int d){
    DNode* insertNode = new DNode(d);

    insertNode->next = head;
    head->prev = insertNode;
    head = insertNode;
}

//2. Insert at tail
void insertAtTail(DNode*& head,DNode*& tail,int d){
    DNode* insertNode = new DNode(d);

    tail->next = insertNode;
    insertNode->prev = tail;
    tail = insertNode;
}

//3. Insert at position
void insertAtPosi(DNode*& head,DNode*& tail,int d,int position){
    //check position is 1
    if(position == 1){
        insertAtHead(head,tail,d);
        return;
    }

    //A. Traverse and find the position to insert
    int cnt=1;
    DNode* curr = head;
    while(cnt <= position-1){
        curr = curr->next;
        cnt ++;
    }

    //Check its at last position
    if(curr->next == NULL){
        insertAtTail(head,tail,d);
        return;
    }

    //B. After checking the ele position now insert
    DNode* insertNode = new DNode(d);
    DNode* temp = curr->next;
    temp->prev = NULL;

    //C. Now inserting a new node
    curr->next = insertNode;
    insertNode->prev = curr;

    insertNode->next=temp;
    temp->prev = insertNode;

}

// -------------- Deletion Specific Stuff --------------------X
//1. Delete at head
void deleteAtHead(DNode*& head,DNode*& tail){
    if(head == NULL || head->next == NULL){
        
        head = NULL;
        tail = NULL;
        return;
    }

    //A. Delete node from head
    DNode* temp = head->next;
    head->next = NULL;
    delete head;
    head = temp;
}

//2. Delete at tail
void deleteAtTail(DNode*& head,DNode*& tail){
    //Edge case
    if(head == NULL || head->next == NULL){        
        head = NULL;
        tail = NULL;
        return;
    }

    //A. Reach at on the tail
    DNode* curr = head;
    DNode* prev = NULL;
    while(curr->next != NULL){
        prev = curr;
        curr = curr->next;
    }

    //B. After reach delete tail
    DNode* temp = curr->prev;

    curr->prev = NULL;
    prev->next = NULL;
    delete curr;
    tail = prev;
}

//3. Delete at position
void deleteAtPosi(DNode*& head,DNode*& tail,int position){
    //Check posi is 1
    if(position == 1){
        deleteAtHead(head,tail);
        return;
    }

    //A. Travere list to find ele position
    int cnt=1;
    DNode* curr = head;
    DNode* prev = NULL;
    while(cnt <= position-1){
        prev = curr;
        curr = curr->next;
        cnt ++;
    }

    //Check curr is at tail
    if(curr->next == NULL){
        deleteAtTail(head,tail);
        return;
    }

    //B. Now delete a node
    DNode* temp = curr->next;

    prev->next = temp;
    temp->prev = prev;

    curr->next = NULL;
    curr->prev = NULL;
    
}

int main(){

    //Initalzing the doubly linked list
    DNode* node = new DNode(5);

    DNode* head = node;
    DNode* tail = node;  

    //----------------- Insertion Specific Stuff
    //1. insertat head
    // insertAtHead(head,tail,23);

    //2. Insert at tail
    insertAtTail(head,tail,23);
    insertAtTail(head,tail,13);
    insertAtTail(head,tail,3);
    print(head);

    //3. Insert at position
    // insertAtPosi(head,tail,100,4);
    // print(head);

    // ------------ Deletion Specific Stuff -------------X
    //1. Delete at head
    // deleteAtHead(head,tail);
    // print(head);

    //2. Delete at tail
    // deleteAtTail(head,tail);
    // print(head);

    //3. Delete at position
    // deleteAtPosi(head,tail,2);
    // print(head);

    return 0;
}