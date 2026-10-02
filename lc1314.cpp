class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        vector<vector<int>> ans(mat.size(),vector<int>(mat[0].size()));
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                long long sum=0;
                // sum+=a[i-1][j-1] + a[i-1][j] + a[i-1][j+1] + a[i][j-1] +  a[i][j]  +  a[i][j+1] +a[i+1][j-1] + a[i+1][j] + a[i+1][j+1];
                for(int r=i-k;r<=i+k;r++){
                    for(int c=j-k;c<=j+k;c++){
                        if(r>=0 && r<mat.size() && c>=0 && c<mat[0].size())
                        sum+=mat[r][c];
                    }
                }
                ans[i][j]=sum;
            }
        }
        return ans;
    }
};