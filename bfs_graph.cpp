#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int n, e;
const int MAXN = 101;
vector<vector<int>> g(MAXN);
bool vis[MAXN];

void init(){
    for(auto& v: g){
        v.clear();
    }
    memset(vis, false, sizeof(vis));
}

int main(){
    int t; cin>>t;
    while(t--){
        init();
        cin>>n>>e;
        for(int i=0;i<e;i++){
            int u, v; cin>>u>>v;
            g[u].push_back(v);
        }
        queue<int> q;
        q.push(0);
        vis[0] = 1;
        while(!q.empty()){
            int now = q.front(); q.pop();
            if(now != 0){
                cout<<' ';
            }
            cout<<now;
            for(int v: g[now]){
                if(!vis[v]){
                    vis[v] = 1;
                    q.push(v);
                }
            }
        }
        cout<<endl;
    }
}
