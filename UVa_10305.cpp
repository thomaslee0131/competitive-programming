#include<iostream>
#include<queue>
#include<vector>
using namespace std;

const int MAXN=101;
int n,m;
vector<int>g[MAXN];
int deg[MAXN];
vector<int>ans;

void init(){
    ans.clear();
    for(int i=1;i<=n;i++){
        g[i].clear();
    }
    for(int i=0;i<m;i++){
        int x,y; cin>>x>>y;
        g[x].push_back(y);
        deg[y]++;
    }
}

void solve(){
    queue<int>q;
    for(int i=1;i<=n;i++){
        if(!deg[i])q.push(i);
    }
    while(q.size()){
        int v=q.front(); q.pop();
        for(int u: g[v]){
            deg[u]--;
            if(!deg[u])q.push(u);
        }
        g[v].clear();
        ans.push_back(v);
    }
}

int main(){
    while(cin>>n>>m){
        if(!n  &&  !m)break;
        init();
        solve();
        for(int i=0;i<(int)ans.size();i++){
            cout<<ans[i];
            if(i==(int)ans.size()-1)cout<<endl;
            else cout<<' ';
        }
    }
}
