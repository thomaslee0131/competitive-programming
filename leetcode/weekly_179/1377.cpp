using vvi = vector<vector<int>>;
class Solution {
public:
    bool visited[101];
    double dfs(int id, vvi& g, int cnt, double prob, int t, int target){
        if(id == target){
            if(cnt-1 > t) return 0;
            if(cnt-1 != t && (g[id].size() != 1 || id == 1)) return 0;
            return prob;
        }
        for(auto u: g[id]){
            if(!visited[u]){
                visited[u] = 1;
                double newprob;
                if(id == 1) newprob = prob/g[id].size();
                else newprob = prob/(g[id].size()-1);
                double cprob = dfs(u, g, cnt+1, newprob, t, target);
                if(cprob != 0) return cprob;
            }
        }
        return 0;
    }
    double frogPosition(int n, vvi& edges, int t, int target) {
        if(n == 1) return 1;
        vvi g(n+1);
        for(auto& e: edges){
            g[e[0]].push_back(e[1]);
            g[e[1]].push_back(e[0]);
        }
        visited[1] = 1;
        double ans = dfs(1, g, 1, 1, t, target);
        return ans;
    }
};
