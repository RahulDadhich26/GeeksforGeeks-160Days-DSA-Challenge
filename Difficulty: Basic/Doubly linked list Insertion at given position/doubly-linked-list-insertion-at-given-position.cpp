/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

// Function to insert a new node at given position in doubly linked list.
class Solution {
  public:
    // Function to insert a new node at given position in doubly linked list.
    Node *addNode(Node *head, int pos, int data) {
        // code here
         Node* newNode = new Node(data);
        Node* temp = head;
        
        // Traverse to the pos-th node
        for (int i = 0; i < pos; ++i) {
            if (temp == nullptr) return head;  // edge case
            temp = temp->next;
        }
        
        // Insert after temp
        newNode->next = temp->next;
        newNode->prev = temp;
        
        if (temp->next != nullptr) {
            temp->next->prev = newNode;
        }
        
        temp->next = newNode;
        
        return head;
    }
};