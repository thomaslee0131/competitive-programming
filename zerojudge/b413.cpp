#include<iostream>
#include<map>
using namespace std;
const int N=50001;
int par[N];
long long ans;
int cnt[N];
map<int, int> q[N];
int find(int x){
    if(par[x]==x){
        return x;
    }
    else return par[x]=find(par[x]);
}
int siz(int u){
    int ru=find(u);
    return cnt[ru];
}

void merge(int u,int v){
    int ru=find(u);
    int rv=find(v);
    if(ru==rv)return;
    int sum=cnt[ru]+cnt[rv];
    if(q[ru].size()<q[rv].size()){
        par[ru]=rv;
        cnt[rv]=sum;
        for( auto const& [key, val] : q[ru] ){
            ans+=(long long)val*q[rv][key];
            q[rv][key]+=val;
        }
        q[ru].clear();
    }
    else {
        par[rv]=ru;
        cnt[ru]=sum;
        for( auto const& [key, val] : q[rv] ){
            ans+=(long long)val*q[ru][key];
            q[ru][key]+=val;
        }
        q[rv].clear();
    }
}

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t; cin>>t;
    while(t--){
        ans=0;
        int n,m; cin>>n>>m;
        for(int i=1;i<n+1;i++){
            q[i].clear();
        }
        for(int i=1;i<=n;i++){
            int a; cin>>a;
            q[i][a]=1;
            par[i]=i;
        }
        while(m--){
            int a,b; cin>>a>>b;
            merge(a,b);
            cout<<ans<<endl;
        }
    }
}
