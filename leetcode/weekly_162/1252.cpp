class Solution {
public:
    int cnt[50][50];
    void add(int r, int c, int n, int m){
        for(int i=0;i<n;i++){
            cnt[i][c]++;
        }
        for(int i=0;i<m;i++){
            cnt[r][i]++;
        }
    }
    int oddCells(int n, int m, vector<vector<int>>& inds) {
        for(auto& ind: inds){
            int r = ind[0], c = ind[1];
            add(r, c, n, m);
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(cnt[i][j] % 2 != 0){
                    ans++;
                }
            }
        }
        return ans;
    }
};
