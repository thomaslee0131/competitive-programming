#include<iostream>
#include<vector>
using namespace std;

const int MAXN=1005;
const int INF=(int)1e9+7;
int n,m;
vector<pair<pair<int,int>,int>> edges;
long long dist[MAXN];

void init(){
    cin>>n>>m;
    edges.clear();
    for(int i=0;i<m;i++){
        int x,y,t; cin>>x>>y>>t;
        edges.push_back({{x,y},t});
    }
    for(int i=1;i<n;i++){
        dist[i]=INF;
    }
    dist[0]=0;
}

bool solve(){
    for(int i=0;i<=n;i++){
        for(int j=0;j<m;j++){
            auto[e,w]=edges[j];
            auto[u,v]=e;
            //cout<<dist[u]<<' '<<w<<' '<<dist[v]<<endl;
            if(dist[u]+w<dist[v]){
                if(i==n)return 1;
                dist[v]=dist[u]+w;
            }
        }
    }
    return 0;
}

int main(){
    int t; cin>>t;
    while(t--){
        init();
        if(solve())cout<<"possible"<<endl;
        else cout<<"not possible"<<endl;
    }
}
