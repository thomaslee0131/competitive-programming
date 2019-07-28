#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
const int MAXN=3e5+10;
long long up[2][MAXN];
long long down[MAXN];
long long v[MAXN];
long long from[MAXN];
vector<pair<long long ,long long>>c[MAXN];
void dfs1(long long x,long long p){
    auto update=[=](long long val,int X){
        if(val>up[0][x]){
            up[1][x]=up[0][x];
            up[0][x]=val;
            from[x]=X;
        }
        else if(val>up[1][x]){
            up[1][x]=val;
        }
    };
    from[x]=x;
    up[0][x]=v[x];
    for(auto i:c[x]){
        if(i.first==p){
            continue;
        }
        dfs1(i.first,x);
        long long thismax=max(up[0][i.first]-i.second+v[x],v[x]);
        update(thismax,i.first);
    }
    return;
}
void dfs2(int x,int p){
    for(auto i:c[x]){
        if(i.first==p){
            continue;
        }
        long long val;
        if(from[x]==i.first){
            val=max({up[1][x]-i.second+v[i.first],v[x]-i.second+v[i.first],v[i.first],down[x]-i.second+v[i.first]});
        }
        else{
            val=max({up[0][x]-i.second+v[i.first],v[x]-i.second+v[i.first],v[i.first],down[x]-i.second+v[i.first]});
        }
        down[i.first]=val;
        dfs2(i.first,x);
    }
}

int main(){
    cin.tie(0);
    cin.sync_with_stdio(false);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=1;i<n;i++){
        long long x,y,z;
        cin>>x>>y>>z;
        x--;y--;
        c[x].push_back({y,z});
        c[y].push_back({x,z});
    }
    dfs1(0,0);
    down[0]=v[0];
    dfs2(0,0);
    long long ans=0;
    for(int i=0;i<n;i++){
        ans=max({ans,up[0][i],down[i]});
    }
    cout<<ans<<endl;
}
