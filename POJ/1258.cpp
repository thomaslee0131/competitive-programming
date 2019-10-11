#include<iostream>
using namespace std;

int n;
int dist[106];
bool vis[106];
int cost[106][106];
int MST;

void init(){
    MST=0;
    for(int i=1;i<=n;i++){
        dist[i]=(int)1e5+6;
        vis[i]=0;
        for(int j=1;j<=n;j++){
            cin>>cost[i][j];
        }
    }
}

void relax(int v){
    vis[v]=1;
    for(int i=1;i<=n;i++){
        dist[i]=min(dist[i],cost[v][i]);
    }
}

void solve(){
    dist[1]=0;
    for(int I=0;I<n;I++){
        int m=(int)1e5+6,v;
        for(int i=1;i<=n;i++){
            if(!vis[i]  &&  dist[i]<m){
                m=dist[i];
                v=i;
            }
        }
        MST+=m;
        relax(v);
    }
}

int main(){
    while(cin>>n){
        init();
        solve();
        cout<<MST<<endl;
    }
}
