/* To perform insertion we have 3-4 types
    1. Insert at head
    2. Insert at tail
    3. Insert at postion
    4. Insert at ele before/after
*/

/*1 . Inserting at head
    Time Complexity: O(1);
    Space Complexity: O(1)
*/
void insertToHead(Node*& head,Node*& tail,int d){
    Node* temp = new Node(d);

    temp->next = head;
    head = temp;
}

/*2 . Inserting at tail
    Time Complexity: O(1);
    Space Complexity: O(1)
*/
void insertToTail(Node*& head,Node*& tail,int d){
    Node* temp = new Node(d);

    tail->next = temp;
    tail = temp;
}

/*3 . Inserting at position
    Time Complexity: O(n);
    Space Complexity: O(1)
*/
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

    //2. Now start to finding the position, where to insert
    int cnt=1;
    Node* curr = head;
    while(cnt < position-1){
        curr = curr->next;
        cnt++;
    }

    //Check curr is at tail
    if(curr->next == NULL){
        insertAtTail(head,tail,d);
        return;
    }

    Node* temp = curr->next;

    //3. After finding position to insert, now inserting a new node
    curr->next = insertNode;
    insertNode->next = temp;
}

/*4 . Inserting at ele ,before/after
    Time Complexity: O(n);
    Space Complexity: O(1)
*/
/*ele: denoting the ele is finding or not,if find than insert o/w no insertion
    phase: denoting the new data is insert at before(0), or after(1)*/
void insertAtEle(Node* &head,Node* &tail,int d,int ele,bool phase){
    //Edge case
    if(head == NULL) return;

    //Check ele is head
    if(head->data == ele){
        if(!phase){ //Insert at head before
            insertToHead(head,tail,d);
            return;
        }
    }

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

    //check ele at tail
    if(curr->next == NULL){
        if(phase){ //insert after tail
            insertAtTail(head,tail,d);
            return;
        }
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