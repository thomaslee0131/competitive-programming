class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        vector<int> idx(256, -1);
        int ans = -1;
        for(int i = 0; i < s.length(); i++){
            if(idx[s[i]] == -1){
                idx[s[i]] = i;
            }
            else{
                ans = max(ans, i - idx[s[i]] - 1);
            }
        }
        return ans;
    }
};
