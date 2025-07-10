// User function Template for C++

/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head_ref, int x) {
         Node* curr = *head_ref;
    
    while (curr != NULL) {
        if (curr->data == x) {
            Node* temp = curr;

            if (curr->prev != NULL)
                curr->prev->next = curr->next;
            else
                *head_ref = curr->next;

            if (curr->next != NULL)
                curr->next->prev = curr->prev;

            curr = curr->next;
            free(temp); // memory release
        }
        else {
            curr = curr->next;
        }
    }
    }
};