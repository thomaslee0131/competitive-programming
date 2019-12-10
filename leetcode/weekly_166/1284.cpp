class Solution {
public:
    int ones;
    int ans = 10;
    int n, m;
    bool isin(int r, int c){
        return r>=0 && r<n && c>=0 && c<m;
    }
    
    void flip(int i, vector<vector<int>>& mat){
        int r = i/mat[0].size(), c = i%mat[0].size();
        int dx[] = {0, 1, -1, 0, 0};
        int dy[] = {0, 0, 0, 1, -1};
        for(int i = 0; i < 5; i++){
            int nowr = r + dx[i], nowc = c + dy[i];
            if(isin(nowr, nowc)){
                ones += mat[nowr][nowc]?-1:1;
                mat[nowr][nowc] = !mat[nowr][nowc];
            }
        }
    }
    
    int minFlips(vector<vector<int>>& orig) {
        int ones0 = 0;
        for(auto v: orig){
            for(auto a: v){
                if(a)ones0++;
            }
        }
        vector<vector<int>> mat = orig;
        n = mat.size(); m = mat[0].size();
        int c = n * m;
        for(int s = 0; s < (1<<c); s++){
            int cnt = 0;
            mat = orig;
            ones = ones0;
            for(int i = 0; i < c; i++){
                if(s & (1<<i)){
                    flip(i, mat);
                    cnt++;
                }
            }
            if(!ones)
                ans = min(ans, cnt);
        }
        if(ans == 10)
            return -1;
        return ans;
    }
};
