class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        vector<int> ans=nums;
        for(int i:nums){
            int x=i,rev=0;
            while(x>0){
                int d=x%10;
                rev=rev*10+d;
                x/=10;
            }
            ans.push_back(rev);
        }
        unordered_map<int,int> freq;
        for(int i:ans){
            freq[i]++;
        }
        return freq.size();
    }
};