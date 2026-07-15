class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string> sets;
        if(s.length()<(1<<k)) return false;
        for(int i=0;i<=s.size()-k;i++){
             sets.insert(s.substr(i,k));
            
        }
        if(sets.size()==(1<<k)){
            return true;
        }
        return false;
    }
};