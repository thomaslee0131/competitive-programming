class Solution {
public:
    int cnt[302][302];
    int maxSideLength(vector<vector<int>>& mtrx, int threshold) {
        int n = mtrx.size(), m = mtrx[0].size();
        cnt[1][1] = mtrx[0][0];
        for(int i = 2; i <= n; i++){
            cnt[i][1] = cnt[i-1][1]+mtrx[i-1][0];
        }
        for(int j = 2; j <= m; j++){
            cnt[1][j] = cnt[1][j-1]+mtrx[0][j-1];
        }
        for(int i = 2; i <= n ; i++){
            for(int j = 2; j <= m; j++){
                cnt[i][j]=cnt[i-1][j]+cnt[i][j-1]-cnt[i-1][j-1]+mtrx[i-1][j-1];
            }
        }
        for(int l = min(n, m); l >= 1; l--){
            for(int i = l; i <= n; i++){
                for(int j = l; j <= m; j++){
                    if(cnt[i][j]-cnt[i-l][j]-cnt[i][j-l]+cnt[i-l][j-l] <= threshold)
                        return l;
                }
            }
        }
        return 0;
    }
};
