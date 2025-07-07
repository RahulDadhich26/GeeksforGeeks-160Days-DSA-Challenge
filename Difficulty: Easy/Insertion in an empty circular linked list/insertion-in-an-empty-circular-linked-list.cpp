// User function Template for C++
class Solution {
  public:

    Node* insertInEmptyList(Node* last, int data) {
        // code here
        Node* newNode = new Node(data);
        
        // Since it's the only node, it points to itself
        newNode->next = newNode;
        
        // Return the new node as last node
        return newNode;
    }
};
