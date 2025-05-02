//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  
    long long getHourstoEatAll(vector<int>& arr , int bananaPerHour){
        long long totalHours = 0;
        for(int i=0;i<arr.size();i++){
            totalHours += ceil(arr[i] / (double)bananaPerHour);
        }
        return totalHours;
    }
    int kokoEat(vector<int>& arr, int k) {
        int low = 1;
        int high = INT_MAX;
        int ans = -1;
        while(low <= high){
            int mid = low + (high - low)/2;
            int hoursToEat = getHourstoEatAll(arr, mid);
            if(hoursToEat <= k){
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;

        cout << ob.kokoEat(arr, k);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends