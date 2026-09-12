class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
         vector<int> a=nums;
        unordered_set<int> s;
        unordered_map<int,pair<int,vector<int>>> ans;
        for(int i=0;i<nums.size();i++){
            ans[a[i]].first++;
            ans[a[i]].second.push_back(i);
            
        }
        int c=0;
        // vector<bool> b(1000000000,true);
        for(int i=0;i<nums.size();i++){
            if(s.count(a[i])){
                continue;
            }
            s.insert(a[i]);
            if(ans[a[i]].first>=3){
                bool valid=true;
                int d=ans[a[i]].second[1]-ans[a[i]].second[0];
                for(int j=2;j<ans[a[i]].second.size();j++){
                if(ans[a[i]].second[j]-ans[a[i]].second[j-1]!=d ){
                    valid=false;
                    break;
                }
                }
                if(valid){
                    c++;
                }
            }
        }
        return c;
        
    }
};