class Solution {
public:
    
    int par[10005];
    
    int find(int x){
        if(par[x] == x) return x;
        return par[x] = find(par[x]);
    }
    
    void merge(int u, int v){
        par[u] = v;
    }
    
    vector<bool> areConnected(int n, int threshold, vector<vector<int>>& queries) {
        
        for(int i = 1; i <= n; i++) par[i] = i;
        
        for(int i = threshold + 1; i < n; i++){
            for(int j = 2 * i; j <= n; j += i){
                int ri = find(i), rj = find(j);
                if(ri != rj){
                    merge(ri, rj);
                    //cout<<"merge "<<i<<' '<<j<<endl;
                }
            }
        }
        vector<bool> ans;
        for(auto& q: queries){
            int u = q[0], v = q[1];
            if(find(u) == find(v)) ans.push_back(1);
            else ans.push_back(0);
        }
        //cout<<find(4)<<' '<<find(5)<<endl;
        return ans;
    }
};
