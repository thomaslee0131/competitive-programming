class Solution {
public:
    
    int cache[1005];
    
    int dp(int idx, vector<int>& arr, vector<vector<int>>& g){
        int ans = 1;
        for(auto& u: g[idx]){
            if(cache[u]) ans = max(ans, cache[u]+1);
            else{
                ans = max(ans, dp(u, arr, g)+1);   
            }
        }
        cache[idx] = ans;
        return ans;
    }
    
    int maxJumps(vector<int>& arr, int d) {
        int n = arr.size();
        vector<vector<int>> g(n);
        for(int i = 0; i < n; i++){
            for(int j = 1; j <= d; j++){
                int idx = i-j;
                if(idx < 0 || arr[i] <= arr[idx]) break;
                g[i].push_back(idx);
            }
            for(int j = 1; j <= d; j++){
                int idx = i+j;
                if(idx >= n || arr[i] <= arr[idx]) break;
                g[i].push_back(idx);
            }
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            ans = max(ans, dp(i, arr, g));
        }
        return ans;
    }
};
