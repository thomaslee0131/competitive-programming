class Solution {
public:
    int sp[41][41][1601];
    bool visited[41][41][1601];
    
    bool isin(int x, int y, int n, int m){
        return x>=0 && x<n && y>=0 && y<m;
    }
    
    int shortestPath(vector<vector<int>>& grid, int r) {
        for(int i = 0; i < 41; i++){
            for(int j = 0; j < 41; j++){
                for(int k = 0; k < 1601; k++){
                    sp[i][j][k] = 1601;
                }
            }
        }
        int n = grid.size(), m = grid[0].size();
        queue<vector<int>> q;
        int dx[] = {1, -1, 0, 0};
        int dy[] = {0, 0, 1, -1};
        sp[0][0][0] = 0;
        q.push({0,0,0,0});
        visited[0][0][0] = 1;
        while(!q.empty()){
            vector<int> v = q.front(); q.pop();
            int x = v[0], y = v[1], k = v[2], c = v[3];
            for(int i = 0; i < 4; i++){
                int nowx = x+dx[i], nowy = y+dy[i];
                if(isin(nowx, nowy, n, m)){
                    if(grid[nowx][nowy] && k<r  && !visited[nowx][nowy][k+1]){
                        visited[nowx][nowy][k+1] = 1;
                        q.push({nowx, nowy, k+1, c+1});
                        sp[nowx][nowy][k+1] = min(sp[nowx][nowy][k+1], sp[x][y][k]+1);
                    }
                    else if(!grid[nowx][nowy] && k<=r  && !visited[nowx][nowy][k]){
                        visited[nowx][nowy][k] = 1;
                        q.push({nowx, nowy, k, c+1});
                        sp[nowx][nowy][k] = min(sp[nowx][nowy][k], sp[x][y][k]+1);
                    }   
                }
            }
        }
        int ans = 1601;
        for(int i = 0; i <= r; i++){
            ans = min(ans, sp[n-1][m-1][i]);
        }
        if(ans == 1601)
            return -1;
        return ans;
    }
};
