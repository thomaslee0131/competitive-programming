#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

const int MAXN = 100;
int n,m;
vector<pair<int, pair<int, int>>> edges;
int par[MAXN];

int find(int x){
    if(x == par[x]){
        return x;
    }
    return par[x] = find(par[x]);
}

void merge(int u, int v){
    int ru = find(u), rv = find(v);
    par[ru] = rv;
}

void init(){
    edges.clear();
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u, v, w;
        cin>>u>>v>>w;
        edges.push_back({w, {u, v}});
    }
    for(int i=0;i<n;i++) par[i] = i;
}

void solve(){
    sort(edges.begin(), edges.end());
    vector< pair<int, int> > MST;
    int MST_weight = 0;
    for(auto [w, e]: edges){
        int u = e.first, v = e.second;
        if(find(u) != find(v)){
            merge(u, v);
            MST.push_back({u, v});
            MST_weight += w;
        }
    }
    cout<<MST_weight<<endl;
    for(auto [u, v]: MST){
        cout<<"{ "<<u<<" , "<<v<<" }"<<endl;
    }
}

int main(){
    init();
    solve();
}
