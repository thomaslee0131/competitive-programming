class Solution {
public:
    int minCostToMoveChips(vector<int>& chips) {
        int even = 0, odd = 0, n = chips.size();
        for(int n: chips){
            if(n % 2 == 0){
                even++;
            }
            else{
                odd++;
            }
        }
        return min(odd, even);
    }
};
