class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        vector<string> ans;
        int cnta=0,cntb=0;
        int n=rain.size();
        bool a=true;
        for(int i=0;i<n-1;i++){
            if(rain[i]==0) {
                ans.push_back("None");
            }
            else {
                if(rain[i]==1 && rain[i+1]==1 && cnta<=cntb){
                    cnta++;
                    ans.push_back("Alice");
                }else{
                    cntb++;
                    ans.push_back("Bob");
                }
            }
        }
        if(rain[n-1]==1){
            ans.push_back("Bob");
        }else{
            ans.push_back("None");
        }
        
        
        return ans;
    }
};