class Solution {
public:
    bool isPossibleToRearrange(string s, string t, int k) {
        int n=s.size(),m=t.size();
        if(s==t) return true;
        unordered_map<string,int> freq;
        for(int i=0;i<n;i+=m/k){
            string q=s.substr(i,n/k);
            cout<<q<<" ";
            freq[q]++;
        }
        cout<<endl;
        bool ans=false;
        int cnt=0;
        unordered_map<string,int> freq1;
        for(int i=0;i<m;i+=m/k){
            string r=t.substr(i,m/k);
            freq1[r]++;
            cout<<r<<" ";
           
            
        }
        for(int i=0;i<m;i+=m/k){
             string r=t.substr(i,m/k);
             if(freq1[r]==freq[r]) cnt++;
        }
        if(cnt>=k) return true;
        else return false;
    }
};