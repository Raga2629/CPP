class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        
        set<int> s;
        
        for(int i:nums){
            if(i%k==0){
                s.insert(i);
            }
        }
        vector<int> a(s.begin(),s.end());
        int i,j=0,n=a.size();
        for(i=k;i<=n*k;i+=k){
            if(a[j]!=i){
                return i;
            }
            j++;
        }
        return i;
    }
};