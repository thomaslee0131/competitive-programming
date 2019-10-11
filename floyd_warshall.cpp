#include<iostream>
#include<algorithm>
using namespace std;

const int MAXN=203;
const int INF=1e8+2;
int d[MAXN][MAXN];
int n,m;
int x,y,z;

void init(){
    cin>>n>>m;
    for(int i=1;i<201;i++){
        for(int j=1;j<201;j++){
            if(i==j) d[i][j]=0;
            else d[i][j]=INF;
        }
    }
    for(int i=0;i<m;i++){
        int u,v,w; cin>>u>>v>>w;
        d[u][v]=min(d[u][v],w);
    }
}

void solve(){
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
            }
        }
    }

}

int main(){
    int t; cin>>t;
    while(t--){
        init();
        solve();
    }
}
