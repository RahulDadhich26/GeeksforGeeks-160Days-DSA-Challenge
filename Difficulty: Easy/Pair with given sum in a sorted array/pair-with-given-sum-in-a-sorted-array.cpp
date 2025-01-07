//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        int st =0 ;
        int end = arr.size() - 1;
        int result = 0 ;
        while(st < end){
            int sum = arr[st] + arr[end] ;
            if(sum == target){
                result++;
                int nextst = st + 1 ;
                while(nextst < end && arr[nextst] == arr[nextst - 1]){
                    nextst++;
                    result++;
                }
                end--;
            }
            else if(sum < target) st++;
            else end--;
        }
        return result;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int target;
        string input;
        getline(cin, input);

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        cin >> target;
        cin.ignore();
        Solution obj;
        cout << obj.countPairs(arr, target) << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends