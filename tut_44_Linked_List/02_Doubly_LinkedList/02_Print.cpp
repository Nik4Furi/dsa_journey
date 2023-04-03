/* Printing the Doubly Linked List
    Time Complexity: O(n)
    Space Complexity: O(1)
*/

void print(DNode* head){
    DNode* temp = head;
    cout << endl << endl << "Printing the Doubly Linked List "<< endl;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}