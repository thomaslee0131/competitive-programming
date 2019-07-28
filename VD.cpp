#include<iostream>
#include<vector>
using namespace std;
bool visit[100010][2];
int pr[100010][2];
vector<int> a[100010];
vector<int> back[100010];
void dfs(int i,bool t,int p){
    if(visit[i][t]==1)return;
    visit[i][t]=1;
    pr[i][t]=p;
    for(int k=0;k<back[i].size();k++){
        dfs(back[i][k],!t,i);
    }
}
void dfs3(int i,bool t){
    if(i==-1)return;
    cout<<i<<" ";
    dfs3(pr[i][t],!t);
}
bool vis2[100010];
bool instack[100010];
bool dfs2(int s){
    if(vis2[s]==1)
        return false;
    vis2[s]=1;
    instack[s]=true;
    for(int i=0;i<a[s].size();i++){
        if(instack[a[s][i]]==1)return true;
        bool e=dfs2(a[s][i]);
        if(e==1)return true;

    }

    instack[s]=false;
    return false;
}
int main(){
    int n,m,s;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        int b;
        cin>>b;
        for(int j=1;j<=b;j++){
            int c;
            cin>>c;
            a[i].push_back(c);
            back[c].push_back(i);
        }
    }
    cin>>s;
    for(int i=1;i<=n;i++){
        if(a[i].size()==0){
            dfs(i,0,-1);
        }
    }
    bool d=dfs2(s);
    if(visit[s][1]==1){
        cout<<"Win"<<endl;
        dfs3(s,1);
        cout<<endl;
    }
    else if(d==1)cout<<"Draw"<<endl;
    else cout<<"Lose"<<endl;

}
