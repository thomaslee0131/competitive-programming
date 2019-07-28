#include<iostream>
using namespace std;
const int N=10001;
int par[N];
int cnt[N];
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
    if(siz(ru)<siz(rv))par[rv]=ru;
    else par[ru]=rv;
    int sum=cnt[ru]+cnt[rv];
    cnt[ru]=sum;
    cnt[rv]=sum;
}
bool query(int u,int v){
    return find(u)==find(v);
}
int main(){
    int n,m,q; cin>>n>>m>>q;
    for(int i=1;i<=n;i++){
        par[i]=i;
        cnt[i]=1;
    }
    for(int i=0;i<m;i++){
        int a,b; cin>>a>>b;
        merge(a,b);
    }
    for(int i=0;i<q;i++){
        int a,b; cin>>a>>b;
        bool f=query(a,b);
        if(f)cout<<":)"<<endl;
        else cout<<":("<<endl;
    }
}

