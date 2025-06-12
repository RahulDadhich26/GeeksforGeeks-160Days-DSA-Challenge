class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int k, int x) {
        vector<int> ans;
        priority_queue<pair<int, int> ,vector<pair<int, int>> , greater<pair<int, int>>>pq;
        for (int i=0; i<arr.size(); i++){
            if(x!= arr[i]){
                int ele= arr[i];
                int putele= abs(ele- x);
                pq.push(make_pair(putele, -arr[i]));
            }
            else{
                continue;
            }
        }
        
        while(k--){
            auto top= pq.top();
            pq.pop();
            int ele= top.second;
            ans.push_back(abs(ele));
             
        }
        return ans;
    }
};