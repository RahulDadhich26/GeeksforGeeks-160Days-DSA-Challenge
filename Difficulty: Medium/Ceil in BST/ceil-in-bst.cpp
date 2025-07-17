/* struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};  */

int findCeil(Node* root, int input) {
    int Ceil = -1;
    
    while(root!=nullptr){
        if(root->data == input){
            return root->data;
        }
        else if(root->data < input){
            root = root->right;
        }
        else {
            Ceil = root->data;
            root = root->left;
        }
    }
    return Ceil;
}