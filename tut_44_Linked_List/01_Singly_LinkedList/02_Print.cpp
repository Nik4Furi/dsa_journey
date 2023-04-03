/*
    Printing the singly linked list
    Time Complexity: O(n)
    Space Complexity: O(1)
*/

void print(Node* head){
    Node* temp = head;

    cout << endl << "Printing the list " << endl;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}