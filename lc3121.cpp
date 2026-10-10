class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n=word.size();
        int cnt=0;
        vector<int> f(26,-1);
        vector<int> l(26,1e9);
        for(int i=0;i<n;i++){
            if(word[i]>='a' && word[i]<='z'){
                f[word[i]-'a']=i;
            }
            else{
                if(l[word[i]-'A']==1e9){
                    l[word[i]-'A']=i;
                }
            }
        }
        for(int i=0;i<26;i++){
            if(f[i]!=-1 && l[i]!=1e9){
                if(f[i]<l[i]){
                    cnt++;
                }
            }
        }
        
        return cnt;
        
    }
};