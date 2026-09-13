class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        for(int i=0;i<n;i++){
            int k=rowShift[i]%n;             rotate(grid[i].begin(),grid[i].begin()+k,grid[i].end());
        }
        
        vector<vector<int>> result(n,vector<int> (n));
        for (int j = 0; j < n; j++) {
            int k = colShift[j] % n;
            for (int i = 0; i < n; i++) {
                int new_row = (i - k + n) % n;
                result[new_row][j] = grid[i][j];
            }
        }
        return result;
    }
};