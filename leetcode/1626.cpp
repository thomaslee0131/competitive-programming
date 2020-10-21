class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        int n = scores.size();
        vector<pair<int, int>> players;
        for(int i = 0; i < n; i++){
            players.push_back({ages[i], scores[i]});
        }
        sort(players.begin(), players.end());
        vector<int> dp(n);
        dp[0] = players[0].second;
        int ans = dp[0];
        for(int i = 1; i < n; i++){
            dp[i] = players[i].second;
            for(int j = i - 1; j >= 0; j--){
                if(players[i].first == players[j].first){
                    dp[i] = max(dp[i], dp[j] + players[i].second);
                }
                else if(players[i].second >= players[j].second){
                    dp[i] = max(dp[i], dp[j] + players[i].second);
                }
            }
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};
