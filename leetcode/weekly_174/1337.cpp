class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n = mat.size(), m = mat[0].size();
        vector<pair<int, int>> row(n);
        for(int i = 0; i < n; i++){
            int cnt = 0;
            for(int j = 0; j < m; j++){
                cnt += mat[i][j];
            }
            row[i] = {cnt, i};
        }
        sort(row.begin(), row.end(), [](pair<int, int> a, pair<int, int> b){
            if(a.first == b.first) return a.second < b.second;
            return a.first < b.first;
        });
        vector<int> res;
        for(int i = 0; i < k; i++){
            res.push_back(row[i].second);
        }
        return res;
    }
};
