class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>> dp(grid.size(),vector<int>(grid[0].size()));
        dp[0][0]=grid[0][0];
        for(int i=1;i<m;i++){
            dp[0][i]=dp[0][i-1]+grid[0][i];
            
        }
        for(int i=1;i<n;i++){
            dp[i][0]=dp[i-1][0]+grid[i][0];
        }
        for(int i=1;i<grid.size();i++){
            for(int j=1;j<grid[0].size();j++){
                dp[i][j]=grid[i][j]+min(dp[i][j-1],dp[i-1][j]);
            }
        }
        return dp[n-1][m-1];
        
    }
};