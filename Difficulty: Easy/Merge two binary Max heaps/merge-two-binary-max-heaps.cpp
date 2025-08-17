        // User function Template for C++
class Solution
{
public:
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m)
    {
        // Merge both arrays into one
        vector<int> merged;
        
        // Add all elements from first heap
        for(int i = 0; i < n; i++) {
            merged.push_back(a[i]);
        }
        
        // Add all elements from second heap
        for(int i = 0; i < m; i++) {
            merged.push_back(b[i]);
        }
        
        // Convert merged array to max heap
        // Start from last non-leaf node and heapify downwards
        int totalSize = n + m;
        for(int i = (totalSize / 2) - 1; i >= 0; i--) {
            heapify(merged, totalSize, i);
        }
        
        return merged;
    }
    
private:
    void heapify(vector<int>& arr, int size, int i) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        
        // If left child is larger than root
        if(left < size && arr[left] > arr[largest]) {
            largest = left;
        }
        
        // If right child is larger than largest so far
        if(right < size && arr[right] > arr[largest]) {
            largest = right;
        }
        
        // If largest is not root
        if(largest != i) {
            swap(arr[i], arr[largest]);
            
            // Recursively heapify the affected sub-tree
            heapify(arr, size, largest);
        }
    }
};