class Solution {
public:
    string rankTeams(vector<string>& votes) {
        int n = votes.size(), t = votes[0].length();
        vector<vector<int>> cnt(t,vector<int>(t+1));
        string s = votes[0];
        sort(s.begin(), s.end());
        unordered_map<int, int> id;
        for(int i = 0; i < t; i++){
            id[s[i]] = i;
        }
        for(auto& v: votes){
            for(int i = 0; i < t; i++){
                cnt[id[v[i]]][i]++;
            }
        }
        for(int i = 0; i < t; i++){
            cnt[i][t] = -s[i];
        }
        sort(cnt.begin(), cnt.end());
        reverse(cnt.begin(), cnt.end());
        string ret = "";
        for(int i = 0; i < t; i++){
            ret += -cnt[i][t];
        }
        return ret;
    }
};
