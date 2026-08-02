class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        int fs=0,ls=0;
        for(int i=0;i<n;i+=2){
            fs+=piles[i];
        }
        for(int i=n-1;i>=0;i-=2){
            ls+=piles[i];
        }
        return true;

    }
};