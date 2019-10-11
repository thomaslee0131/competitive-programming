class Solution {
public:
    bool vis[15][15];
    vector<int> ans;
    
    bool isin(int x, int y, int X, int Y){
        return x>=0 && x<X && y>=0 && y<Y;
    }
    
    void dfs(int sum, int n, int m, vector<vector<int>>& g, int N, int M){
        //cout<<g[n][m]<<' ';
        const int dx[] = {1, 0, -1, 0};
        const int dy[] = {0, 1, 0, -1};
        int nsum = sum+g[n][m];
        bool end = 1;
        for(int i=0;i<4;i++){
            int nowx = n+dx[i], nowy = m+dy[i];
            if(isin(nowx, nowy, N, M) && !vis[nowx][nowy] && g[nowx][nowy]){
                end = 0;
                vis[nowx][nowy] = 1;
                dfs(nsum, nowx, nowy, g, N, M);
                vis[nowx][nowy] = 0;
            }
        }
        if(end){
            //cout<<endl;
            ans.push_back(nsum);
            return;
        }
    }
    
    int getMaximumGold(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ret = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans.clear();
                memset(vis, false, sizeof(vis));
                if(grid[i][j]){
                    vis[i][j] = 1;
                    dfs(0, i, j, grid, n, m);
                    vis[i][j] = 0;
                }
                for(int a: ans){
                    ret = max(ret, a);
                }
            }
        }
        return ret;
    }
};
