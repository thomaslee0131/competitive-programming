#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<long long >group[150010];
int main(){
    std::ios_base::sync_with_stdio(0);
    long long n,k,q;
    scanf("%lld%lld%lld",&n,&k,&q);
    for(long long i=0;i<k;i++){
        long long v,g;
        scanf("%lld%lld",&v,&g);
        group[g].push_back(v);
    }
    for(long long  i=1;i<=k;i++){
        sort(group[i].begin(),group[i].end());
    }
    /*for(int i=1;i<4;i++){
        for(int j=0;j<group[i].size();j++){
            cout<<group[i][j]<<' ';
        }
        cout<<endl;
    }*/
    while(q--){
        long long a,b;
        scanf("%lld%lld",&a,&b);
        long long ans=0;
        for(long long i=0;i<(long long)group[a].size();i++){
            long long  l=-1,r=group[b].size(),m=(l+r)/2;
            while(l+1!=r){
                if(group[b][m]>group[a][i]){
                    r=m;
                }
                if(group[b][m]<group[a][i]){
                    l=m;
                }
                if(group[b][m]==group[a][i]){
                    break;
                }
                m=(l+r)/2;
            }
            if(m==0&&group[a][i]<group[b][m]){
                m--;
            }
            for(long long j=0;j<=m;j++){
                ans+=group[b][j];
            }
            for(long long j=1;j<=(long long)group[b].size()-m-1;j++){
                ans+=group[a][i];
            }
        }
        printf("%lld\n",ans);
    }
}

