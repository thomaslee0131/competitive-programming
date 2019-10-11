#include<iostream>
#include<vector>
using namespace std;

vector<int> g[202];
bool vis[202];
int n, e, viscnt;

void init(){
    memset(vis, false, sizeof(vis));
    for(auto& v: g){
        v.clear();
    }
    viscnt = 0;
}

void dfs(int node){
    if(viscnt == n){
        cout<<node<<endl;
        return;
    }
    cout<<node<<' ';
    for(auto v: g[node]){
        if(!vis[v]){
            vis[v] = 1;
            viscnt++;
            dfs(v);
            vis[v] = 0;
        }
    }
    return;
}

int main(){
    int t; cin>>t;
    while(t--){
        init();
        cin>>n>>e;
        for(int i=0;i<e;i++){
            int u, v;cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        vis[0] = 1; viscnt ++;
        dfs(0);
    }
}
