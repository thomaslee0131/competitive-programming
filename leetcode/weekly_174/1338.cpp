class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int half = arr.size()/2;
        unordered_map<int, int> cnt;
        for(auto& a: arr)
            cnt[a]++;
        vector<pair<int, int>> p;
        for(auto& [key, val]: cnt){
            p.push_back({val, key});
        }
        sort(p.begin(), p.end());
        int deleted = 0, ans = 0;;
        for(int i = p.size()-1; i >= 0; i--){
            if(deleted >= half){
                break;
            }
            deleted += p[i].first;
            ans ++;
        }
        return ans;
    }
};
