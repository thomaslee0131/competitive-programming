#include<iostream>
#include<algorithm>
using namespace std;
int dp[81][81];
int main(){
    while(1){
        string a,b;
        getline(cin,a);
        if(cin.eof())break;
        getline(cin,b);
        int la=(int)a.size();
        int lb=(int)b.size();
        for(int i=1;i<=la;i++){
            dp[i][0]=i;
        }
        for(int i=1;i<=lb;i++){
            dp[0][i]=i;
        }
        for(int i=1;i<=la;i++){
            for(int j=1;j<=lb;j++){
                if(a[i]==b[j]){
                    dp[i][j]=dp[i-1][j-1];
                }
                else{
                    dp[i][j]=min(dp[i-1][j]+1,dp[i][j-1]+1);
                    dp[i][j]=min(dp[i][j],dp[i-1][j-1]+1);
                }
            }
        }
        cout<<dp[la][lb]<<endl;
    }
}
