class Solution {
public:
    int dp[2][1010];
    const int MOD=(int)1e9+7;
    int numRollsToTarget(int d, int f, int target) {
        int now=1,pre=0;
        for(int i=1;i<=target;i++){
            if(i<=f)dp[0][i]=1;
            else dp[0][i]=0;
        }
        for(int i=2;i<=d;i++){
            for(int j=1;j<=target;j++){
                if(j<i){
                    dp[now][j]=0;
                    continue;
                }
                if(j-f-1>=1){
                    dp[now][j]=(dp[now][j-1]+dp[pre][j-1]-dp[pre][j-f-1])%MOD;
                    if(dp[now][j]<0)dp[now][j]+=MOD;
                }
                else{
                    dp[now][j]=(dp[now][j-1]+dp[pre][j-1])%MOD;
                    if(dp[now][j]<0)dp[now][j]+=MOD;
                }
            }
            int tem=now;
            now=pre;
            pre=tem;
            
        }
        return dp[(d+1)%2][target];
    }
};
