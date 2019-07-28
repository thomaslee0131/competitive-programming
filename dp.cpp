#include<iostream>
#include<vector>
int s[21];
int dp[30][10000];
using namespace std;
vector<int> v;
int main(){

    int n,t;
    while(cin>>n){
        v.clear();
        cin>>t;
        for(int i=0;i<t;i++)cin>>s[i];
        for(int i=0;i<t;i++){
            for(int j=0;j<=n;j++){
                dp[i+1][j]=dp[i][j];
                int pre=j-s[i];
                if(pre>=0){
                    dp[i+1][j]=max(dp[i+1][j],dp[i][pre]+s[i]);
                }
            }           
        }
        int a=n;
        for(int i=t;i>0;i--){
            if(dp[i][a]==dp[i-1][a])continue;
            else{
                a=a-s[i-1];
                v.push_back(s[i-1]);
            }    
        }
        for(int i=v.size()-1;i>=0;i--){
            cout<<v[i]<<" ";
        }
        cout<<"sum:"<<dp[t][n]<<endl;
    }
}
