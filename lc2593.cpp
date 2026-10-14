class Solution {
public:
    long long findScore(vector<int>& nums) {
        long long sum=0,n=nums.size();
        vector<bool> r(n,false);
        vector<pair<int,int>> res(n);
        for(int i=0;i<n;i++){
            res[i]={nums[i],i};
        }
        sort(res.begin(),res.end());
        for(int i=0;i<n;i++){
            if(r[res[i].second]==false){
                sum+=res[i].first;
                r[res[i].second]=true;
                if(res[i].second>=1)       r[res[i].second-1]=true;
                if(res[i].second<n-1)      r[res[i].second+1]=true;
            }
        }
        return sum;
    }
};