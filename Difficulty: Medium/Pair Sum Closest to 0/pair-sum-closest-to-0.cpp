//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int closestToZero(int arr[], int n) {
        // your code here
       sort(arr, arr + n);

    int left = 0;
    int right = n - 1;

    int minSum = INT_MAX;
    int closest = 0;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (abs(sum) < abs(minSum)) {
            minSum = sum;
            closest = sum;
        }
        // If same abs(sum), prefer positive value
        else if (abs(sum) == abs(minSum) && sum > closest) {
            closest = sum;
        }

        if (sum < 0)
            left++;
        else
            right--;
    }

    return closest; 
    }
};


//{ Driver Code Starts.
int main ()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.closestToZero(arr, n) << endl;
    
cout << "~" << "\n";
}
}
// } Driver Code Ends