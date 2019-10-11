class Solution {
public:
    int movesToMakeZigzag(vector<int>& nums) {
        int res1=0, res2=0;
        for(int i=0;i<nums.size();i+=2){
            if(!i){
                res1+=max(0,nums[i]-nums[i+1]+1);
                continue;
            }
            if(i==nums.size()-1){
                res1+=max(0,nums[i]-nums[i-1]+1);
                continue;
            }
            res1+=max({0,nums[i]-nums[i+1]+1,nums[i]-nums[i-1]+1});
        }
        for(int i=1;i<nums.size();i+=2){
            if(i==nums.size()-1){
                res2+=max(0,nums[i]-nums[i-1]+1);
                continue;
            }
            res2+=max({0,nums[i]-nums[i+1]+1,nums[i]-nums[i-1]+1});
        }
        return min(res1,res2);
    }
};
