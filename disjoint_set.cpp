#include<iostream>

using namespace std;
const int N=100;
int par[N];
int cnt[N];
int find(int x){
    if(par[x]==x){
        return x;
    }
    else return find(par[x]);
}

void merge(int u,int v){
    int ru=find(u);
    int rv=find(v);
    par[ru]=rv;
    int sum=cnt[ru]+cnt[rv];
    cnt[ru]=sum;
    cnt[rv]=sum;
}

int siz(int u){
    int ru=find(u);
    return cnt[ru];
}
bool query(int u,int v){
    return find(u)==find(v);
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        par[i]=i;
        cnt[i]=1;
    }
    int q;
    cin>>q;
    while(q--){
        int cmd;
        cin>>cmd;
        if(cmd==1){//merge
            int u,v;
            cin>>u>>v;
            merge(u,v);
        }
        else if(cmd==2){//query
            int u;
            cin>>u;
            cout<<siz(u)<<endl;
        }
    }
}
