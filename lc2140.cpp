class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        long long cnt=0;
        long long mod=1e9+7;
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int m=trainers.size(),n=players.size();
        int i=0,j=0;
        while(i<n && j<m){
            if(players[i]<=trainers[j]){
                cnt++;
                i++;
                j++;
            }
            else {
                j++;
            }
        }
            return cnt;            
        
    }
};