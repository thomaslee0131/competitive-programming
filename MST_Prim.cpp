#include<iostream>
using namespace std;

vector<pair<int, int>> g[101]; // {weight, v}
int d[101];
int par[101];
bool vis[101];
int n, m;

void init(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u, v, w;
        cin>>u>>v>>w;
        g[u].push_back({w, v});
        g[v].push_back({w, u});
    }
    for(int i=0;i<n;i++) d[i] = 1e9;
    for(int i=0;i<n;i++) vis[i] = 0;
}

void relax(){
    
}

void solve(){
    d[0] = 0;
    par[0] = 0;
    for(int i=0;i<n;i++){
        int a = -1, b = -1, min = 1e9;
        for(int j=0;j<n;j++){
            if(!vis[j] && d[j] < min){
                a = j;
                min = d[j];
            }
        }
        if(a == -1) break;
        vis[a] = 1;
        relax();
    }
}

int main(){
    init();
    solve();
}
