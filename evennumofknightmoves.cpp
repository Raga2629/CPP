class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        bool ans=false;
        int n=start.size();
       
        if(((target[0]+target[1])%2==0 && (start[0]+start[1])%2==0) || (target[0]+target[1])%2!=0 && (start[0]+start[1])%2!=0 ){
            return true;
        }
        else return false;
    
    }
};