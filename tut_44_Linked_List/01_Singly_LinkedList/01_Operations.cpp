#include <iostream>
using namespace std;

//Creating a class to implement the singly linked list
class Node{
    public:
    int data; //data
    Node* next; //next pointer

    //Constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    //Destructor to free the spaces --Its is optional because we are doing it procedur in the function already
    ~Node(){
        int val = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
            cout << "Free memory successfully";
        }
    }
};

//Print the linked list,reference of the head
void print(Node* head){
    Node* temp = head;

    cout << endl << "Printing the list " << endl;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

//---------- Finding the length of the linked list ---------X
int getLength(Node* head){
     Node* temp = head;
    int len = 0;

    while(temp != NULL){
        len ++;
        temp = temp->next;
    }
    return len;
}

// --------Insertion in the linked list ----------X
//1. At head
void insertToHead(Node*& head,Node*& tail,int d){
    Node* temp = new Node(d);

    temp->next = head;
    head = temp;
}

//2. Insert at tail
void insertToTail(Node*& head,Node*& tail,int d){
    Node* temp = new Node(d);

    tail->next = temp;
    tail = temp;
}

//-3- Inserting a node in that position
void insertAtPosi(Node* &head,Node* &tail,int d,int position){
    Node* insertNode = new Node(d);

    //Edge case
    if(head == NULL) head = insertNode;

    if(head->next == NULL) head->next = insertNode;

    // Check insert a new node at position 1 or head
    if(position == 1){
        insertToHead(head,tail,d);
         return;
    } 
    else if(position == getLength(head)){
        insertToTail(head,tail,d);
        return;
    }


    //2. Now start to finding the position, where to insert
    int cnt=1;
    Node* curr = head;
    while(cnt < position-1){
        curr = curr->next;
        cnt++;
    }
    Node* temp = curr->next;

    //3. After finding position to insert, now inserting a new node
    curr->next = insertNode;
    insertNode->next = temp;
}

/*ele: denoting the ele is finding or not,if find than insert o/w no insertion
    phase: denoting the new data is insert at before(0), or after(1)*/
void insertAtEle(Node* &head,Node* &tail,int d,int ele,bool phase){
    //Edge case
    if(head == NULL) return;

    //1. Finding the ele in the list
    int cnt=0;
    Node* curr = head;
    Node* prev = NULL;
    bool found = false;
    while(curr->next != NULL){
        if(curr->data == ele){
            found = true;
            break;
        }
        prev = curr;
        curr = curr->next;
    }

    if(!found){
        cout <<endl<< "Can't find the ele in list "<<endl;
        return;
    } 

    //2. After finding, you get prev and curr
    Node* insertNode = new Node(d);
    
    if(!phase){ //Inserting a node before ele
        Node* temp = prev->next;
        prev->next = temp;
        prev->next = insertNode;
        insertNode->next = temp;
    }
    else { //Inserting d after ele
        Node* temp = curr->next;
        curr->next = temp;
        curr->next = insertNode;
        insertNode->next = temp;
    }
}


// ------- DELETE SPECIFIC STUFF ---------------------------------------- x
//1. Delete at head
void deleteAtHead(Node*& head,Node*& tail){
    //Edge case
    if(head == NULL) return;

    if(head->next == NULL){
        head = NULL;
        tail = NULL;
        return;
    } 

    //A. After edge cases now delete the head
    Node* temp = head->next;

    head->next = NULL;
    delete head;
    head = temp; 
}

//2. Delete at tail
void deleteAtTail(Node*& head,Node*& tail){
    //Edge case
    if(head == NULL) return;

    if(head->next == NULL){
        head = NULL;
        tail = NULL;
        return;
    } 

    //A. Traverse the list and find tail
    Node* curr = head;
    Node* prev = NULL;

    while(curr->next != NULL){
        prev = curr;
        curr = curr->next;
    }

    //B. Deleting node
    prev->next = NULL;
    delete curr;
    tail = prev;
}

//3. Delete a ele from position
void deleteAtPosi(Node*& head,Node*& tail,int position){

    //if postion is 1, i.e. delete at head
    if(position == 1){
         deleteAtHead(head,tail);
         return;
    }

    //A. Finding the position of ele
    Node* curr = head;
    int cnt=1;
    while(cnt < position-1){
        curr = curr->next;
        cnt++;
    }

    //Check here, curr is at tail
    if(curr->next == NULL) {
         deleteAtTail(head,tail);
         return;
    }

    //B. Deleting the ele
    Node* temp = curr->next;
    curr->next = temp->next;
    temp->next = NULL;
    delete temp;

}

// 4 Delete a finding ele
void deleteAtEle(Node*& head,Node*& tail,int d){
    // Check its head
    if(head-> data == d){
        deleteAtHead(head,tail);
        return;
    }

    //A. Traverse list and finding the d
    Node* curr = head;
    Node* prev = NULL;
    bool found = false;

    while(curr->next != NULL){
        if(curr->data == d){
            found = true;
            break;
        } 
        prev = curr;
        curr = curr->next;
    }


    //check finding ele is at tail
    if(curr->next == NULL && curr->data == d){
        deleteAtTail(head,tail);
        return;
    }
    
    if(!found){
        cout << endl << d << " is not found in list" <<endl;
        return;
    } 

    //B. we success to finding the d, now delete it
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;

}


int main(){

    //Initizaling the Node
    Node* node = new Node(5);

    Node* head = node ; //Creating the head pointer
    Node* tail = node ; //Creating the tail pointer

    /*print(head); //Print the list by the reference of the head
    insertToHead(head,7);
    insertToHead(head,9);
    insertToHead(head,11);
    insertToHead(head,13); */

    //Inserting the data at form the tail
    insertToTail(head,tail,23);
    // print(head);
    insertToTail(head,tail,13);
    // print(head);
    insertToTail(head,tail,3);
    print(head);

    /*
    //Insertion at all position on the linked list
    insertAtPosi(head,tail,34,3);
    insertAtPosi(head,tail,356,5);
    print(head);
    insertAtPosi(head,tail,7,1);
    print(head); */

    // insertAtEle(head,tail,100,5,0);
    // print(head);

    //----------- Start to deleting the data from head,position,tail ------X
    //1. Delete at head
    // deleteAtHead(head,tail);
    
    //2. Delete at tail
    // deleteAtTail(head,tail);

    //3. Delete at position
    // int posi = 4;
    // deleteAtPosi(head,tail,posi);

    //4. Delete a finding data
    int d = 3;
    deleteAtEle(head,tail,d);
    print(head);

    return 0;
}