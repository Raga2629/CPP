class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int mx=*max_element(lights.begin(),lights.end());
        int mxele=0;
        for(int i=0;i<arrivalTime.size();i++){
            if(arrivalTime[i]%period>=mx){
                mxele=max(mxele,period-(arrivalTime[i]%period));
            }
        }
        return mxele;
    }
};