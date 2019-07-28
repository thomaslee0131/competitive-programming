#include<iostream>
#include<algorithm>
using namespace std;
int n,ww;
int w[101];
int v[101];
int dp[101][10001];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>w[i]>>v[i];
    }
    cin>>ww;
    for(int i=1;i<=n;i++){
        for(int j=1;j<ww;j++){
            if(w[i]>j-w[])dp[i][j]=dp[i-1][j];
            else dp[i][j]=max(dp[i-1][j-w[i]],dp[i-1][j]+v[i]);
        }
    }
    cout<<dp[n][ww]<<endl;
    for(int i=0;1<=n;i++){
        for(int j=0;j<=ww;j++){
            cout<<dp[i][j]<<' ';
        }   
        cout<<endl;
    }
}
