/*The structure of the class is
class SortedStack{
public:
    stack<int> s;
    void sort();
};
*/

/* The below method sorts the stack s
you are required to complete the below method */
void SortedStack ::sort() {
    if (!s.empty()) {
        int a = s.top();
        s.pop();
        sort();
        if (!s.empty() && a<s.top()) { 
            int b = s.top();
            s.pop();
            s.push(a);
            sort();
            s.push(b);
        }
        else s.push(a);
    }
}