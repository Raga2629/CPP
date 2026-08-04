class Solution {
public:
    int maxVowels(string s, int k) {
        int cnt=0;
         string a=s;
        // string t="aeiou";
        for(int j=0;j<k;j++){
            if((a[j]=='a'||a[j]=='i'||a[j]=='e'||a[j]=='o'||a[j]=='u')){
                cnt++;
            }
        }
        int mx=cnt;
        for(int i=k;i<s.size();i++){
            if(a[i-k]=='a'||a[i-k]=='i'||a[i-k]=='e'||a[i-k]=='o'||a[i-k]=='u'){
                cnt--;      //removing outgoing character
            }
            if(a[i]=='a'||a[i]=='i'||a[i]=='e'||a[i]=='o'||a[i]=='u') cnt++;    //inserting new character

            //sliding window of size k
             mx=max(mx,cnt); 
        }
      
    
        return mx;
    }
};