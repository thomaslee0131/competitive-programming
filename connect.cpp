#include<iostream>
#include<vector>
#include<utility>
#include <algorithm>
using namespace std;
int par[1000010];
int find(int x){
    if(par[x]==x){
        return x;
    }
    return par[x]=find(par[x]);
}
void e(int x,int y){
    par[find(x)]=find(y);
}
int main(){
    int n;
    bool first=true;
    while(cin>>n){
        if(!first){
            cout<<endl;
        }
        first=0;
        vector<pair<int,pair<int,int>>>p;
        for(int i=0;i<=n;i++){
            par[i]=i;
        }
        long long d=0;
        for(int i=1;i<n;i++){
            int a,b,c;
            cin>>a>>b>>c;
            d=d+c;
        }
        int k;
        cin>>k;
        while(k--){
            int a,b,c;
            cin>>a>>b>>c;
            p.push_back({c,{a,b}});
        }
        cin>>k;
        while(k--){
            int a,b,c;
            cin>>a>>b>>c;
            p.push_back({c,{a,b}});
        }
        sort(p.begin(),p.end());
        long long ans=0,c=0;
        for(int i=0;i<p.size();i++){
            if(c==n-1){
                break;
            }
            if(find(p[i].second.first)==find(p[i].second.second)){
                continue;
            }
            else{
                ans=ans+p[i].first;
                c++;
                e(p[i].second.first,p[i].second.second);
            }
        }
        cout<<d<<endl<<ans<<endl;
    }
}
