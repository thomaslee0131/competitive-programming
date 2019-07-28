#include<iostream>
#include<queue>
#include<vector>
using namespace std;
using pii = pair<int,int>;
const int MAXN=(int)1e5+3;
int n,m;
priority_queue<pii, vector<pii>, greater<pii>>pq;
bool vis[MAXN];
vector<pii>cost[MAXN];
long long MST;
int cnt;

void init(){
    MST=0;
    for(int i=0;i<n;i++){
        cost[i].clear();
    }
    for(int i=0;i<n;i++){
        vis[i]=0;
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
    for(auto [dist,u]:cost[v]){
        pq.push({dist,u});
    }
}

void solve(){
    cnt=0;
    pq.push({0,0});
    while(pq.size()){
        auto[dist,v]=pq.top();pq.pop();
        if(vis[v])continue;
        MST+=dist;
        cnt++;
        relax(v);
    }
}

int main(){
    cin.tie(0);cout.tie(0);cin.sync_with_stdio(0);
    while(cin>>n>>m){
        init();
        solve();
        if(cnt<n)cout<<-1<<endl;
        else cout<<MST<<endl;
    }
}
