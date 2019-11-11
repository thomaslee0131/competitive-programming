class Solution {
public:
    bool vis[100][100];
    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int dr[] = {1, 0, -1, 0};
        int dc[] = {0, 1, 0, -1};
        int ans = 0;
        for(int i=1;i<n-1;i++){
            for(int j=1;j<m-1;j++){
                if(grid[i][j] == 0 && !vis[i][j]){
                    queue<pair<int, int>> q;
                    q.push({i, j});
                    vis[i][j] = 1;
                    bool isclosed = 1;
                    while(!q.empty()){
                        
                        int r = q.front().first, c = q.front().second;
                        q.pop();
                        /*if(i == 5 && j == 6){
                            cout<<r<<' '<<c<<endl;
                        }*/
                        if(r == 0 || r == n-1 || c == 0 || c == m-1){
                            isclosed = 0;
                        }
                        for(int k=0;k<4;k++){
                            int nowr = r+dr[k], nowc = c+dc[k];
                            if(nowr<0 || nowr>=n || nowc<0 || nowc>=m){
                                continue;
                            }
                            if(grid[nowr][nowc] == 0 && !vis[nowr][nowc]){
                                vis[nowr][nowc] = 1;
                                q.push({nowr, nowc});
                            }
                        }
                    }
                    if(isclosed){
                        //cout<<i<<' '<<j<<endl;
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};
