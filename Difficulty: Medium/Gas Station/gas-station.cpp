/*You are required to complete this method*/
class Solution {
  public:
    int startStation(vector<int> &gas, vector<int> &cost) {
        // Your code here
        int n = gas.size();  
  
    // Variables to track total and current remaining gas
    int totalGas = 0;
    int currGas = 0;
    int startIdx = 0;

    // Traverse through each station to calculate remaining
    // gas in the tank, and total gas 
    for(int i = 0; i < n; i++) {
      	currGas += gas[i] - cost[i]; 
        totalGas += gas[i] - cost[i];  

        // If currGas is negative, circular tour can't 
      	// start with this index, so update it to next one
        if(currGas < 0) {
            currGas = 0;
            startIdx = i + 1; 
        }
    }

    // No solution exist
    if(totalGas < 0) 
        return -1;

    return startIdx;
    }
};