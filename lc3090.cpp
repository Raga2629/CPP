class Solution {
public:
    int maximumLengthSubstring(string s) {
        int mx=0;
       for(int i=0;i<s.size();i++){
        string st="";
        
        for(int j=i;j<s.size();j++){
            int cnt=0;
            bool ans=false;
            st+=s[j];
            unordered_map<char,int> freq;
            for(char k:st){
                freq[k]++;
            }
            for(char k:st){
                if(freq[k]<=2){
                   ans=true;
                }
                else{
                    ans=false;
                    break;
                }
            } 
            if(ans){
                mx=max(mx,(int)st.size());
            }
        }
       }
       return mx;
    }
};