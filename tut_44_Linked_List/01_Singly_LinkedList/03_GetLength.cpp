/* finding the length of the linked list
    Time Complexity: O(n)
    Space Complexity: O(1)
*/

int getLength(Node* head){
    Node* temp = head;
    int len = 0;

    while(temp != NULL){
        len ++;
        temp = temp->next;
    }
    return len;
}