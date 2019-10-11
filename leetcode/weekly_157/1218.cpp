class Solution {
public:
    int longestSubsequence(vector<int>& a, int d) {
        int n = a.size();
        int ans = 0;
        unordered_map<int, int> res;
        for(int x: a){
            res[x] = res[x-d]+1;
            ans = max(ans, res[x]);
        }
        return ans;
    }
};
