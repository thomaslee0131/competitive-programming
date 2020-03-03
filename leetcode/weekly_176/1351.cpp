class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0;
        for(auto& g: grid){
            for(auto& n: g){
                if(n < 0)
                    ans ++;
            }
        }
        return ans;
    }
};
