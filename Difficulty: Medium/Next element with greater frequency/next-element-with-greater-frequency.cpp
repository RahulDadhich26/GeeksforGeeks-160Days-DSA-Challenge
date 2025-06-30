class Solution {
  public:
    vector<int> print_next_greater_freq(int arr[], int n) {
       vector<int>v;
       stack<int>st;
      unordered_map<int,int>m;
      for(int i=0;i<n;i++){
          m[arr[i]]++;
      }
      v.push_back(-1);
     for(int i=n-1;i>=0;i--){
         if(st.empty()==false and m[st.top()]>m[arr[i]])
            v.push_back(st.top());
        else if(st.empty()==false and m[st.top()]<=m[arr[i]]){
            while(st.empty()==false and m[st.top()]<=m[arr[i]])
              st.pop();
            if(st.empty()==true)
             v.push_back(-1);
            else
             v.push_back(st.top());
        }
          st.push(arr[i]);
         
     }
      reverse(v.begin(),v.end());
       return v;
    }
};
