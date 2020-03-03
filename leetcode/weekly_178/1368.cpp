int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
class Solution {
public:
    
    int n, m;
    
    bool ok(int x, int y){
        return x >= 0 && x < n && y >= 0 && y < m;
    }
    
    bool visited[201][100][100];
    
    
    void dfs(int level, int x, int y, vector<vector<int>>& grid){
        if(!ok(x, y)) return;
        if(level > 200) return;
        if(visited[level][x][y]) return;
        visited[level][x][y] = 1;
        for(int i = 0; i < 4; i++){
            if(i == grid[x][y]-1){
                dfs(level, x+dx[i], y+dy[i], grid);
            }
            else{
                dfs(level+1, x+dx[i], y+dy[i], grid);
            }
        }
    }
    
    int minCost(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        dfs(0,0,0,grid);
        for(int i = 0; i <= 200; i++){
            if(visited[i][n-1][m-1]){
                return i;
            }
        }
        return -1;
    }
};
