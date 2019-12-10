class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& gsize) {
        int n = gsize.size();
        unordered_map<int, vector<int>> g;
        vector<vector<int>> res;
        for(int i = 0; i < n; i++){
            g[gsize[i]].push_back(i);
            if(g[gsize[i]].size() == gsize[i]){
                res.push_back(g[gsize[i]]);
                g[gsize[i]].clear();
            }
        }
        return res;
    }
};
