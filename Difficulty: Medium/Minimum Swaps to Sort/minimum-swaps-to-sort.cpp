class Solution {
  public:
    int minSwaps(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int i = 0 ; i < arr.size() ; i++)
        {
            mp[arr[i]] = i;
        }
        vector<pair<int,int>>vp(mp.begin(),mp.end());
        sort(vp.begin(),vp.end());
        int cnt = 0;
        for(int i = 0 ; i < arr.size() ; i++)
        {
            while(vp[i].second != i)
            {
                swap(vp[i],vp[vp[i].second]);
                cnt++;
            }
        }
        return cnt;
    }
};