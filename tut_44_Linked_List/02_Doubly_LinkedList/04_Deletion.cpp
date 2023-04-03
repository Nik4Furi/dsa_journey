/* Deletion in the linked list also have 3 types of conditions
    1. Delete at head
    2. Delete at tail
    3. Delete at postion
*/

/*1. Delete at head
    Time Complexity: O(1)
    Space Complexity: O(1)
*/
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

/*2 Delete at tail
    Time Complexity: O(n)
    Space Complexity: O(1)
*/
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

/*3 Delete at position
    Time Complexity: O(n)
    Space Complexity: O(1)
*/
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