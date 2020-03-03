class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < n; j++){
                if(i==j) continue;
                if(nums[j] < nums[i]) ans[i]++;
            }
        }
        return ans;
    }
};
