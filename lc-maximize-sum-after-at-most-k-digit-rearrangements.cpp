class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        int n=nums.size();
        long long sum=0;
        vector<int> a;
        for(int i:nums){
            sum+=i;
            string k=to_string(i);
            sort(k.begin(),k.end());
            reverse(k.begin(),k.end());
            int x=stoi(k);
            a.push_back(x-i);
            
        }
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        for(int i=0;i<k;i++){
            sum+=a[i];
        }
        return sum;
    }
};©leetcode