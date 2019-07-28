#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
const int N=100002;
int par[N];
int find(int x){
    if(par[x]==x){
        return x;
    }
    else return par[x]=find(par[x]);
}

void merge(int u,int v){
    int ru=find(u);
    int rv=find(v);
    par[ru]=rv;
}

bool same_tree(int u, int v){
    return find(u)==find(v);
}

vector<pair<int, pair<int, int>>> edges;

int main(){
    cin.tie(0);
    cout.tie(0);
    cin.sync_with_stdio(0);
    int n,m;
    while(cin>>n>>m){
        edges.clear();
        for(int i=0;i<n;i++) par[i]=i;
        for(int I=0;I<m;I++){
            int i, j, c; cin>>i>>j>>c;
            edges.push_back({c,{i,j}});
        }
        if(m<n-1){
            cout<<-1<<endl;
            continue;
        }
        sort(edges.begin(),edges.end());
        long long ans=0;
        for(int i=0;i<m;i++){
            int u=edges[i].second.first, v=edges[i].second.second;
            if(!same_tree(u,v)){
                merge(u,v);
                ans+=(long long)edges[i].first;
            }
        }
        int pre=0;
        bool connected=1;
        for(int i=0;i<n;i++){
            if(!i){
                pre=find(i);
                continue;
            }
            if(pre!=find(i)){
                connected=0;
                break;
            }
            pre=find(i);
        }
        if(!connected){
            cout<<-1<<endl;
            continue;
        }
        cout<<ans<<endl;
    }
}
