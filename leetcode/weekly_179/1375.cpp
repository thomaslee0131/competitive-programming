class Solution {
public:
    int numTimesAllBlue(vector<int>& light) {
        int n = light.size();
        int maxpos = 0, ans = 0;
        for(int i = 0; i < n; i++){
            maxpos = max(maxpos, light[i]);
            if(maxpos-1 == i) ans++;
        }
        return ans;
    }
};
