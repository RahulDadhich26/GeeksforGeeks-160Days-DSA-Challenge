//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class TrieNode{
    public:
    bool isCompleteWord;
    TrieNode* children[26];
    
    TrieNode(){
        isCompleteWord = false;
        memset(children,0,sizeof(children));
    }
};

class Trie {
  public:
   TrieNode* root;
    Trie() {
        root = new TrieNode();
    }

    void insert(string &word) {
       TrieNode* node = root;
       for(char ch : word){
           int idx = ch - 'a';
           if(node->children[idx]==nullptr) node->children[idx] = new TrieNode();
           node = node->children[idx];
       }
       node->isCompleteWord = true;
    }

    bool search(string &word) {
        TrieNode* node = root;
       for(char ch : word){
           int idx = ch - 'a';
           if(node->children[idx]==nullptr) return false;
           node = node->children[idx];
       }
      return node->isCompleteWord;
    }

    bool isPrefix(string &word) {
       TrieNode* node = root;
       for(char ch : word){
           int idx = ch - 'a';
           if(node->children[idx]==nullptr) return false;
           node = node->children[idx];
       }
      return true;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int q;
        cin >> q;
        cin.ignore();
        vector<bool> ans;
        Trie ob;
        for (int i = 0; i < q; i++) {
            int x;
            cin >> x;
            string s;
            cin >> s;
            cin.ignore();
            if (x == 1) {
                ob.insert(s);
            } else if (x == 2) {
                ans.push_back(ob.search(s));
            } else if (x == 3) {
                ans.push_back(ob.isPrefix(s));
            }
        }
        cout << boolalpha;
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends