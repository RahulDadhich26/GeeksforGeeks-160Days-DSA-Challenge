// User function Template for C++

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        vector<int>temp;
        
        for(int i = 0 ;i<Mat.size();i++){
            for(int j = 0 ;j < Mat[0].size();j++){
                temp.push_back(Mat[i][j]);
            }
        }
        
        sort(temp.begin(),temp.end());
        
        
        int k = 0;
        for(int i = 0 ;i<Mat.size();i++){
            for(int j = 0 ;j < Mat[0].size();j++){
                Mat[i][j] = temp[k++];
            }
        }
        return Mat;
    }
};