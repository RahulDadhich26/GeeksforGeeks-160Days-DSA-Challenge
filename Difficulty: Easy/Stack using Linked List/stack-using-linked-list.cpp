class MyStack {
  private:
    StackNode *top;

  public:
    void push(int x) {
        // Create a new node with the given data
        StackNode* new_node = new StackNode(x);

        // Check if memory allocation failed (only useful if using nothrow)
        if(!new_node){
            return;
        }

        // Make the new node point to the current top
        new_node->next = top;

        // Update top to be the new node
        top = new_node;
    }

    // Function to remove and return the top element of the stack
    int pop() {
        // Check if the stack is empty
        if(top == NULL){
            return -1; // Return -1 to indicate underflow
        }
        else {
            // Store the data to return
            int popped = top->data;

            // Save the current top node in a temp variable
            StackNode* temp = top;

            // Move top to the next node
            top = top->next;

            // Free memory of the removed node
            delete temp;

            // Return the popped value
            return popped;
        }
    }
    MyStack() { top = NULL; }
};