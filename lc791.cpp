class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> freq;
        vector<bool> b(26,false);
        for(char i:s){
            freq[i]++;
        }
        string ans="";
        for(char i:order){
            for(int j=0;j<freq[i];j++)
                ans+=i;
                b[i-'a']=true;
        }
        for(char i:s){
            if(b[i-'a']==false){
                ans+=i;
            }
        }
        return ans;
        
    }
};