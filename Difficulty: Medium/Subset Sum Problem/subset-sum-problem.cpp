//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isSubsetSum(vector<int>& arr, int sum) {
       sort(arr.begin(),arr.end());
       vector<int>dp1(sum+1,0),dp2(sum+1,0);
       dp1[0]=1; dp2[0]=1;
       for(int i=0;i<arr.size();i++){
           for(int j=1;j<=sum;j++){ 
               if(dp1[j]||(arr[i]<=j && dp1[j-arr[i]])) {dp2[j]=1;}
               
           }
           dp1=dp2;
       }
        return dp1[sum];
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int sum;
        cin >> sum;
        cin.ignore();

        Solution ob;
        if (ob.isSubsetSum(arr, sum))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends