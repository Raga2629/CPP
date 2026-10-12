
class Solution {
public:
   
    int fact(long long n,long long r,vector<vector<long long>> &dp){
        if(r==0) return 1;
        if(r>n || n==0) return 0;
        if(dp[n][r]!=-1) return dp[n][r];
        else return dp[n][r]=fact(n-1,r-1,dp)+fact(n-1,r,dp);
    }
    int uniquePaths(int m, int n) {
       std::vector<std::vector<long long>> dp(200, std::vector<long long>(200,-1));
      
        int x=n+m-2;
        int y=m-1;
        
        return fact(x,y,dp);
    }
};