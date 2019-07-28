#include<iostream>
#include<vector>
using namespace std;
int l[2010];
int r[2010];
int pr_order[2010];
int po_order[2010];
int c,d;
int nu[2010];
vector<int> chart[2010];
void pre(int x){
    if(x==0){
        return;
    }
    pr_order[c]=x;
    c++;
    pre(l[x]);
    pre(r[x]);
}
void post(int x){
    if(x==0)return;
    post(l[x]);
    post(r[x]);
    po_order[d]=x;
    d++;
}
int a;
int k;
void dfs(int x){
    if(nu[x]!=0){
        return;
    }
    nu[x]=a%k+1;
    for(auto next:chart[x])
        dfs(next);
}
int main(){
    int t;
    cin>>t;
    for(int I=1;I<=t;I++){
        int n;
        c=1;
        d=1;
        cin>>n>>k;
        for(int i=1;i<=n;i++){
            cin>>l[i]>>r[i];
        }
        for(int i=0;i<2010;i++){
            chart[i].clear();
        }
        pre(1);
        post(1);
        for(int i=1;i<=n;i++){
            chart[po_order[i]].push_back(pr_order[i]);
            chart[pr_order[i]].push_back(po_order[i]);
        }
        int cnt=0;
        for(int i=0;i<2010;i++){
            nu[i]=0;
        }
        for(int i=1;i<=n;i++){
            if(nu[i]==0){
                dfs(i);
                a++;
                cnt++;
            }
        }
        if(cnt<k){
            cout<<"Case #"<<I<<": Impossible"<<endl;
        }
        else {
            cout<<"Case #"<<I<<": ";
            for(int i=1;i<=n;i++){
                cout<<nu[i];
                if(i<n)cout<<' ';
            }
            cout<<endl;
        }
    }
}
