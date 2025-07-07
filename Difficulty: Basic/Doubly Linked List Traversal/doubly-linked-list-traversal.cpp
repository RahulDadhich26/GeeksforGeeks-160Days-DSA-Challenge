// User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};

*/
vector<int> displayList(Node *head) {
    vector<int>ans;
    Node*temp = head;
    while(temp!=NULL){
        ans.push_back(temp->data);
        temp = temp->next;
    }
    return ans;
}