class Solution {
public:
    int power(int a,int b){
        int ans=1;
        a%=1337;
        b%=1337;
        while(b>0){
            if(b&1){
                ans=(ans*a)%1337;
            }
            a=(a*a)%1337;
            b>>=1;
        }
        return ans;
    }
    int superPow(int a, vector<int>& b) {
        if(a==1) return 1;
        int ans=1;
        string s="";
        for(int i:b){
            ans=power(ans,10)*power(a,i)%1337;
        }
        
        return ans%1337;
        // stringstream ss;
        // int n=b.size();
        // for(int i=0;i<n;i++){
        //     ss<<b[i];
        // }
        // long long base=a;
        // string s=ss.str();
        // long long x=stoi(s);
        // long long y=1337,m=x;
        // long long result=1;
        // while(x>0){
        //     if(x%2==1){
        //         result=(result*base)%y;
        //     }
        //     base=(base*base)%y;
        //     x=x/2;
        // }
        // int ans=(m<0)?1/result:result;
        // cout<<result;
        // return int(ans%y);
    }
};