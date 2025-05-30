class Solution {
  public:
   int search(vector<int>& arr, int key) {
        int low =0 ;
        int high = arr.size() - 1;
        
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(arr[mid] == key) return mid;
            
            // left half is sorted
            if(arr[mid] >= arr[low]) {
                if(key >= arr[low] && key < arr[mid]){
                    high = mid - 1;
                }
                else {
                    low = mid + 1;
                }
            }
            else {
                if(key > arr[mid] && key <= arr[high]){
                    low = mid + 1;
                }
                else {
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
};