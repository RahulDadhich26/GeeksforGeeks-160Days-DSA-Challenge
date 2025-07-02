// User function Template for C++

class Solution {
  public:
    int minThrow(int N, int arr[]) {
        // code here
           map<int,int> ladder;
        map<int,int> snake;
        
        for (int i=0;i<2*N;i=i+2){
            if (arr[i]<arr[i+1]){
                ladder[arr[i]]=arr[i+1];
            }
            else {
               snake[arr[i]]=arr[i+1];
            }
        }
        queue<pair<int,int>> q;
        q.push({0,1});
        while (!q.empty()){
            int loc=q.front().second;
            int step=q.front().first;
            q.pop();
            if (loc==30) return step;
           if (loc>30) continue;
            for (int k=1;k<=6;k++){
                int newloc=loc+k;
                if (ladder.find(newloc)!=ladder.end()){
                    q.push({step+1,ladder[newloc]});
                }
                else if (snake.find(newloc)!=snake.end()){
                    q.push({step+1,snake[newloc]});
                }
                else {
                    q.push({step+1,newloc});
                }
            }
        } 
    }
};