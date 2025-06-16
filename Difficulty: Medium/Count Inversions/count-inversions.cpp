class Solution {
  public:
    // Function to count inversions in the array.
      int mergesort( vector<int> &arr , int l , int r , int mid){
        int i = l;
        int j = mid+1;
        int invcount = 0 ;
        vector<int>temp;
        while(i <= mid && j <= r ){
             
             if(arr[i] <= arr[j]){
                 temp.push_back(arr[i++]);
             }
             else{
                
                 temp.push_back(arr[j++]);
                  invcount += (mid-i+1);
             }
        }
        while(i <= mid){
            temp.push_back(arr[i++]);
        }
        while(j <= r){
            temp.push_back(arr[j++]);
        }
        for( int k = 0 ; k <temp.size() ; k++ ){
            arr[l+k] = temp[k];
        }
        return invcount;
    }
    int merge(vector<int>&arr , int l , int r){
        int invcount  = 0;
        if(l < r){
        int mid = l + (r-l)/2;
         invcount += merge(arr , l , mid);
         invcount += merge(arr , mid+1 , r);
         invcount += mergesort(arr , l , r, mid);
        
    }
    return invcount;
    }
    
    int inversionCount(vector<int> &arr) {
        // Your Code Here
        return merge(arr , 0 , arr.size()-1);
        
    }
};