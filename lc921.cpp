class Solution {
public:
    int minAddToMakeValid(string s) {

        int cnt=0,c=0;
        for(char i:s){
            if(i=='(') cnt++;
            else {
               if(cnt>0) cnt--;
               else c++;
            }
        }
        return cnt+c;
    }
};