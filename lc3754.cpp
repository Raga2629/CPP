class Solution {
public:
    long long sumAndMultiply(int n) {
        int x=n;
        int rev=0,sum=0;
        while(x>0){
            int d=x%10;
            if(d==0){
                x/=10;
                continue;
            }
            rev=rev*10+d;
            x/=10;
        }
   
        int r=0;
        while(rev>0){
            int digit=rev%10;
            r=r*10+digit;
            sum+=digit;
            rev/=10;
        }
       
        return (long long)r*sum;

    }
};