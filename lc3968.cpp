class Solution {
public:
    int maxDistance(string moves) {
        int l=0,u=0,d=0,r=0,t=0;
        for(char i:moves){
            if(i=='L') l++;
            else if(i=='U') u++;
            else if(i=='D') d++;
            else if(i=='R') r++;
            else t++;
        }
        return abs(u-d)+abs(l-r)+t;
    }
};