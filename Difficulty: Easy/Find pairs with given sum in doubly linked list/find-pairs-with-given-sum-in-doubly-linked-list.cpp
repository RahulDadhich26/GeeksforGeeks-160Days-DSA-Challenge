// User function Template for C++

/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution {
  public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
         Node* end = head;
        Node* start = head;
        int startBalance = 0;
        int endBalance = 0;
        vector<pair<int,int> > result;
        while(end->next!=NULL){
            end = end->next;
            endBalance++;
        }
        while(startBalance < endBalance){
            int sum = start->data + end->data;
            if(sum > target){
                end = end->prev;
                endBalance--;
            }
            else if(sum < target){
                start = start->next;
                startBalance++;
            }
            else{
                pair<int,int> p = make_pair(start->data,end->data);
                result.push_back(p);
                start = start->next;
                startBalance++;
                end = end->prev;
                endBalance--;
            }
        }

        return result;
    }
};