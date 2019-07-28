#include<iostream>
#include<queue>
#include<vector>
using namespace std;
using pii = pair<int,int>;

const int MAXN=(int)1e5+3;
int n,m;
long long dist[MAXN];
priority_queue<pii, vector<pii>, greater<pii>>pq;
bool vis[MAXN];
vector<pii>cost[MAXN];
int cnt;

void init(){
    while(pq.size()){
        pq.pop();
    }
    for(int i=0;i<n;i++){
        cost[i].clear();
    }
    for(int i=0;i<n;i++){
        vis[i]=0;
        dist[i]=(int)1e9+1;
    }
    for(int i=0;i<m;i++){
        int u,v,c;
        cin>>u>>v>>c;
        cost[u].push_back({c,v});
        cost[v].push_back({c,u});
    }
}

void relax(int v){
    vis[v]=1;
    for(auto [len,u]:cost[v]){
        if(dist[u]>dist[v]+len){
            dist[u]=dist[v]+len;
            pq.push({u,dist[u]});
        }
    }
}

void solve(){
    dist[0]=0;
    pq.push({0,0});
    while(pq.size()){
        auto[v,dis]=pq.top();pq.pop();
        if(vis[v])continue;
        dist[v]=dis;
        relax(v);
    }
}

int main(){
    cin.tie(0);cout.tie(0);cin.sync_with_stdio(0);
    while(cin>>n>>m){
        init();
        solve();
        for(int i=0;i<n;i++){
            cout<<dist[i]<<endl;
        }
    }
}

