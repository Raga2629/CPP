class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ans;
        int lastidx=0;
        for(string i:operations){
            if(isdigit(i[0]) || i[0]=='-'){
                ans.push_back(stoi(i));
            }
            else if(i[0]=='+'){
                ans.push_back(ans[lastidx]+ans[lastidx-1]);
            }
            else if(i[0]=='C'){
                ans.pop_back();
            }
            else if(i[0]=='D'){
                ans.push_back(2*ans[lastidx]);
            }
            lastidx=ans.size()-1;
        }
        return accumulate(ans.begin(),ans.end(),0); // return sum of ans
    }
};