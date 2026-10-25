class Solution {
public:
    int countStaircase(vector<int>& nums) {
        int cnt=0,n=nums.size();
        for(int i=0;i<n;i++){
            unordered_map<int,int> freq;
            vector<int> temp;
            for(int j=i;j<n;j++){
                freq[nums[j]]++;
                if(freq[nums[j]]==1) temp.push_back(nums[j]);
                bool ans=false;
                for(int i=0;i<temp.size();i++){
                    if(freq[temp[i]]!=i+1){
                        ans=false;
                        break;
                    }else ans=true;
                }
                if(ans) cnt++;
            }

        }
        return cnt;
    }
};