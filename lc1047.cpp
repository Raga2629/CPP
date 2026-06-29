class Solution {
public:
    string removeDuplicates(string s) {
       
        vector<char> v;
        string ans="";
        char t=s[0];
        for(char i:s){
            if(!ans.empty()  && i==ans.back()){
                ans.pop_back();
                
            }
            else{
                ans+=i;
              
            }
        }
        return ans;
        
    }
};