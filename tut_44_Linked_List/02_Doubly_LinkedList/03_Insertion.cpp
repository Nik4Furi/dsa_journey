/* To perform insertion we have 3 types
    1. Insert at head
    2. Insert at tail
    3. Insert at postion
*/

/*1 . Inserting at head
    Time Complexity: O(1);
    Space Complexity: O(1)
*/
void insertAtHead(DNode*& head,DNode*& tail,int d){
    DNode* insertNode = new DNode(d);

    insertNode->next = head;
    head->prev = insertNode;
    head = insertNode;
}

/*2 . Inserting at tail
    Time Complexity: O(1);
    Space Complexity: O(1)
*/
void insertAtTail(DNode*& head,DNode*& tail,int d){
    DNode* insertNode = new DNode(d);

    tail->next = insertNode;
    insertNode->prev = tail;
    tail = insertNode;
}

/*3 . Inserting at position
    Time Complexity: O(n);
    Space Complexity: O(1)
*/

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