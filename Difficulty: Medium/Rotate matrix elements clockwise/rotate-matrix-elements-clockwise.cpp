// User function Template for C++

class Solution {
  public:
    vector<vector<int>> rotateMatrix(int M, int N, vector<vector<int>> matrix) {
      
         int top = 0;
        int bottom = M-1;
        int left = 0;
        int right = N-1;
        
        while(top<bottom && left<right){
            int temp = matrix[left][top];
            
            //top to bottom-1 in the left column
            for(int i = top;i<bottom;i++){
                matrix[i][left] = matrix[i+1][left];
            }
            
            //left to right-1 in the bottom row
            for(int j = left;j<right;j++){
                matrix[bottom][j] = matrix[bottom][j+1];
            }
            left++;
            
            //bottom to top+1 in the right column
            for(int i = bottom;i>top;i--){
                matrix[i][right] = matrix[i-1][right];
            }
            bottom--;
            
            //right to left+1 in the top row
            for(int j = right;j>left;j--){
                matrix[top][j] = matrix[top][j-1];
            }
            matrix[top][left] = temp;
            top++;
            right--;
        }
        return matrix;
    }
};