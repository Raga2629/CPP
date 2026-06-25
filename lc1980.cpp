class Solution {
public:
string ans="";
    void generatebinary(int n,vector<string>& nums,string t){
        if(!ans.empty()) return;
        if(t.length()==n){
            auto it=find(nums.begin(),nums.end(),t);
            if(it==nums.end()){
                ans= t;
               
            }
             return;
        }

        generatebinary(n,nums,t+"0");
        generatebinary(n,nums,t+"1");
        
    }
    string findDifferentBinaryString(vector<string>& nums) {
       string t="";
       int n=nums.size();
       generatebinary(n,nums,t);
       return ans;
    }
};