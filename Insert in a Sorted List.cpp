class Solution {
public:
    Node* sortedInsert(Node* head, int data) {
        // Create a new node with the given data
        Node* newNode = new Node(data);
        
        // If the list is empty or the new node should be inserted at the beginning
        if (!head || data < head->data) {
            newNode->next = head;
            return newNode;
        }
        
        // Traverse the linked list to find the appropriate position to insert the new node
        Node* current = head;
        while (current->next && current->next->data < data) {
            current = current->next;
        }
        
        // Insert the new node into the list
        newNode->next = current->next;
        current->next = newNode;
        
        return head;
    }
};
