class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        vector<int> a=nums;
        unordered_map<int,pair<int,vector<int>>> ans;
        for(int i=0;i<nums.size();i++){
            ans[a[i]].first++;
            ans[a[i]].second.push_back(i);
            
        }
        int c=0;
        vector<bool> b(100,true);
        for(int i=0;i<nums.size();i++){
            if(ans[a[i]].first==3){
                if((ans[a[i]].second[1] - ans[a[i]].second[0]) == (ans[a[i]].second[2] - ans[a[i]].second[1]) && b[a[i]]){
                    b[a[i]]=false;
                    c++;
                }
            }
        }
        return c;
        
    }
};