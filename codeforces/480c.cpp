#include<iostream>
using namespace std;
long long dp[5010][5010];
long long sum[5010];
const long long prime=1e9+7;
int main (){
    int a,b,n,k;
    long long ans=0;
    cin>>n>>a>>b>>k;
    if(a<b){
        a=n+1-a;
        b=n+1-b;
    }
    dp[0][a]=1;
    for(int i=1;i<=k;i++){
        for(int s=1;s<=n;s++){
            sum[s]=sum[s-1]+dp[i-1][s];
            sum[s]=sum[s]%prime;
        }
        for(int j=b+1;j<=n;j++){
            dp[i][j]=sum[n]-sum[(j+b)/2]-dp[i-1][j];
            while(dp[i][j]<0)dp[i][j]+=prime;
        }
    }
    for(int i=1;i<=n;i++){
        ans+=dp[k][i];
        ans=ans%prime;
    }
    cout<<ans<<endl;
}
