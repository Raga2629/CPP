class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int sum=0,count=0;;
        sort(costs.begin(),costs.end());
        if(costs[0]>coins) return 0;
        // else sum=costs[0];
        for(int i=0;i<costs.size();i++){
             sum+=costs[i];
            if(sum<=coins){
               
                count++;
            }
            else break;
        }
        return count;
    }
};