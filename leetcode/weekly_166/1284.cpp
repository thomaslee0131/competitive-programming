class Solution {
public:
    int ans = 8, n, m;
    
    bool isin(int r, int c){
        return r>=0 && r<n && c>=0 && c<m;
    }
    
    void dfs(vector<vector<int>>& mat, int r, int c, int cnt, int ones){
        if(!ones){
            ans = min(ans, cnt);
            return;
        }
        if(cnt >= ans)
            return;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int plus = 0;
                if(mat[i][j]){
                    plus--;
                    ones--;
                }
                else{
                    ones++;
                    plus++;
                }
                mat[i][j] = !mat[i][j];
                if(isin(i+1, j)){
                    if(mat[i+1][j]){
                        plus--;
                        ones--;
                    }
                    else{
                        ones++;
                        plus++;
                    }
                    mat[i+1][j] = !mat[i+1][j];
                }
                if(isin(i-1, j)){
                    if(mat[i-1][j]){
                        plus--;
                        ones--;
                    }
                    else{
                        ones++;
                        plus++;
                    }
                    mat[i-1][j] = !mat[i-1][j];
                }
                if(isin(i, j+1)){
                    if(mat[i][j+1]){
                        plus--;
                        ones--;
                    }
                    else{
                        ones++;
                        plus++;
                    }
                    mat[i][j+1] = !mat[i][j+1];
                }
                if(isin(i, j-1)){
                    if(mat[i][j-1]){
                        plus--;
                        ones--;
                    }
                    else{
                        ones++;
                        plus++;
                    }
                    mat[i][j-1] = !mat[i][j-1];
                }
                dfs(mat, i, j, cnt+1, ones);
                ones -= plus;
                mat[i][j] = !mat[i][j];
                if(isin(i+1, j)){
                    mat[i+1][j] = !mat[i+1][j];
                }
                if(isin(i-1, j)){
                    mat[i-1][j] = !mat[i-1][j];
                }
                if(isin(i, j+1)){
                    mat[i][j+1] = !mat[i][j+1];
                }
                if(isin(i, j-1)){
                    mat[i][j-1] = !mat[i][j-1];
                }
            }
        }
    }
    int minFlips(vector<vector<int>>& mat) {
        int ones = 0;
        n = mat.size();
        m = mat[0].size();
        for(auto& r: mat){
            for(auto & c: r){
                if(c) ones ++;
            }
        }
        if(!ones)
            return 0;
        dfs(mat, 0, 0, 0, ones);
        if(ans == 8)
            return -1;
        return ans;
    }
};
