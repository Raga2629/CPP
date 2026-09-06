class Solution {
public:
   
    int countRotations(string s, int k) {
        int cnt=0,c=0;
        for(int i=0;i<s.size();i++){
            int x=cnt;
            cnt=0;
            rotate(s.begin(),s.begin()+1,s.end());
            // cout<<s<<endl;
            for(int j=0;j<s.size()-1;j++){
                if(s[j]==s[j+1]){
                    cnt++;
                }
            }
            
            if(cnt==k){
                c++;
            }          
            
        }
        
        return c;
    
    }
};