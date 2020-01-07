class Solution {
public:
    int lcs[501][501];
    int minInsertions(string a) {
        int n = a.length();
        string b = "";
        for(int i = a.length()-1; i >= 0; i--){
            b += a[i];
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(a[i-1] == b[j-1])
                    lcs[i][j] = lcs[i-1][j-1]+1;
                else
                    lcs[i][j] = max(lcs[i][j-1], lcs[i-1][j]);
            }
        }
        return n-lcs[n][n];
    }
};
