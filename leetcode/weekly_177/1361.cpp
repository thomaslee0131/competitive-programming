class Solution {
public:
    bool ans = 1;
    bool visited[10003];
    int viscnt;
    void dfs(vector<vector<int>>& g, int n){
        if(g[n].size() > 2){
            ans = 0;
            return;
        }
        for(auto& v: g[n]){
            if(visited[v]){
                ans = 0;
                return;
            }
            visited[v] = 1;
            viscnt ++;
            dfs(g, v);
        }
    }
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        vector<vector<int>> g(n);
        vector<vector<int>> par(n);
        for(int i = 0; i < n; i++){
            if(leftChild[i] != -1){
                g[i].push_back(leftChild[i]);
                par[leftChild[i]].push_back(i);
            }
            if(rightChild[i] != -1){
                g[i].push_back(rightChild[i]);
                par[rightChild[i]].push_back(i);
            }
        }
        int root = -1;
        for(int i = 0; i < n; i++){
            if(par[i].size() == 0){
                root = i;
            }
        }
        if(root == -1) return 0;
        visited[root] = 1;
        viscnt ++;
        dfs(g, root);
        if(viscnt != n) return 0;
        return ans;
    }
};
