class Solution {
public:
    vector<vector<int>> reconstructMatrix(int up, int low, vector<int>& colsum) {
        int n = colsum.size();
        int zero = 0, one = 0, two = 0;
        for(auto& col: colsum){
            if(col == 0) zero++;
            else if(col == 1) one++;
            else two++;
        }
        if(two > low || two > up) return {};
        int updiff = up-two, lowdiff = low-two;
        if(updiff + lowdiff != one) return {};
        vector<int> upans, lowans;
        for(auto& col: colsum){
            if(col == 2){
                upans.push_back(1);
                lowans.push_back(1);
            }
            else if(col == 0){
                upans.push_back(0);
                lowans.push_back(0);
            }
            else{
                if(updiff>0){
                    upans.push_back(1);
                    lowans.push_back(0);
                    updiff--;
                }
                else{
                    upans.push_back(0);
                    lowans.push_back(1);
                }
            }
        }
        vector<vector<int>> ans;
        ans.push_back(upans);
        ans.push_back(lowans);
        return ans;
    }
};
