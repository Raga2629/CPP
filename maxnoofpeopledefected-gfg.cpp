class Solution {
  public:
    int maxPeopleDefeated(int p) {
        // Code Here
        int cnt=0,sum=0;
        for(int i=1;i<p;i++){
            if(i*i<=p && p-sum>=i*i){
                cnt++;
                sum+=i*i;
            }
            else break;
        }
        return cnt;
    }
};
