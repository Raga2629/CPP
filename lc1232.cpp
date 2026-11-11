class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x=coordinates[1][0]-coordinates[0][0];
        int y=coordinates[1][1]-coordinates[0][1];
        
        bool ans=false;
        int n=coordinates.size();
        for(int i=2;i<n;i++){
            if(x*(coordinates[i][1] - coordinates[1][1])- y*(coordinates[i][0] - coordinates[1][0])==0){
                ans=true;
            }else{
                ans=false;
                break;
            }
        }
        if(n==2) {
            return true;
        }
        return ans;
        
    }
};

