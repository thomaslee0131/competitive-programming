#include<iostream>
#include<queue>
#include<vector>
using namespace std;
using pii = pair<int,int>;

const int MAXN=1000000;
pii arr[1000][1000];
int n,m;
long long dist[MAXN];
priority_queue<pii, vector<pii>, greater<pii>>pq;
bool vis[MAXN];
vector<pii>cost[MAXN];

bool isin(int x,int y){
    return x<n&&y<m;
}

void init(){
    cin>>n>>m;
    while(pq.size()){
        pq.pop();
    }
    for(int i=0;i<n*m;i++){
        cost[i].clear();
    }
    for(int i=0;i<n*m;i++){
        vis[i]=0;
        dist[i]=(int)1e9+1;
    }
    int ind=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int x;cin>>x;
            arr[i][j]={ind,x};
            ind++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int dy=j+1,dx=i+1;
            if(isin(i,dy)){
                auto[v1,c1]=arr[i][j];
                auto[v2,c2]=arr[i][dy];
                cost[v2].push_back({v1,c1});
                cost[v1].push_back({v2,c2});
            }
            if(isin(dx,j)){
                auto[v1,c1]=arr[i][j];
                auto[v2,c2]=arr[dx][j];
                cost[v1].push_back({v2,c2});
                cost[v2].push_back({v1,c1});
            }
        }
    }
}

void relax(int v){
    vis[v]=1;
    for(auto [u,len]:cost[v]){
        if(dist[u]>dist[v]+len){
            dist[u]=dist[v]+len;
            pq.push({dist[u],u});
        }
    }
}

void solve(){
    dist[0]=arr[0][0].second;
    pq.push({dist[0],0});
    while(pq.size()){
        auto[dis,v]=pq.top();pq.pop();
        if(vis[v])continue;
        dist[v]=dis;
        relax(v);
    }
}

int main(){
    cin.tie(0);cout.tie(0);cin.sync_with_stdio(0);
    int t;cin>>t;
    while(t--){
        init();
        solve();
        cout<<dist[n*m-1]<<endl;
    }
}


