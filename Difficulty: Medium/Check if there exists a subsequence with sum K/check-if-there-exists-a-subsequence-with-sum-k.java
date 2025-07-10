class Solution {
    public static boolean checkSubsequenceSumHelper(int[]arr ,int k, int i, int sum){
        //This is added because if sum exceed k then no need to check further subsequences
        if(sum>k){
            return false;
        }
        
        if(i==arr.length){
            return sum == k;
        }
        // Include the current element
        if (checkSubsequenceSumHelper(arr, k, i + 1, sum + arr[i])) {
            return true;
        }

        // Exclude the current element
        if (checkSubsequenceSumHelper(arr, k, i + 1, sum)) {
            return true;
        }

        return false;
    }
    public static boolean checkSubsequenceSum(int N, int[] arr, int K) {
        return checkSubsequenceSumHelper(arr,K,0,0);
    }
}

