class Solution {
public:
    
    int dfs(int id, vector<vector<int>>& g, vector<int>& inform){
        int maxt = 0;
        for(auto& next: g[id]){
            maxt = max(maxt, dfs(next, g, inform));
        }
        return inform[id]+maxt;
    }
    
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        //if(n==1) return 0;
        vector<vector<int>> g(n);
        for(int i = 0; i < n; i++){
            if(manager[i] != -1){
                g[manager[i]].push_back(i);
            }
        }
        return dfs(headID, g, informTime);
    }
};
