class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int>s(arr.begin(),arr.end());
        vector<int> t(s.begin(),s.end());
        int n=arr.size();
        unordered_map<int,int> vec;
        sort(t.begin(),t.end());
        int j=0;
        for(int i:t){
            vec[i]=j+1;
            j++;
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
           
            ans.push_back(vec[arr[i]]);

        }
        return ans;

    }
};