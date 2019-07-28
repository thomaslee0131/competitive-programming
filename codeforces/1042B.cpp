#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> b[7];
bool dc[]={1,1,1,0,1,0,0};
bool db[]={1,0,1,1,0,1,0};
bool da[]={1,1,0,1,0,0,1};
void save(int cost,string j){
    bool has[]={0,0,0};
    for(int i=0;i<(int)j.size();i++){
        if(j[i]=='A'){
            has[0]=1;
        }
        if(j[i]=='B'){
            has[1]=1;
        }
        if(j[i]=='C')has[2]=1;
    }
    for(int k=0;k<7;k++){
        if(da[k]==has[0]&&db[k]==has[1]&&dc[k]==has[2]){
            b[k].push_back(cost);
            //cout<<k<<endl;
        }
    }
}
int solve(){
    for(int i=0;i<7;i++){
        sort(b[i].begin(),b[i].end());
    }
    bool ok=0;
    int ans=3e5;
    if(b[0].size()){
    ans=min(b[0][0],ans);
    ok=1;}
    if(b[6].size()&&b[2].size()){
    ans=min(b[6][0]+b[2][0],ans);
    ok=1;}
    if(b[5].size()&&b[1].size()){
    ans=min(b[5][0]+b[1][0],ans);
    ok=1;}
    if(b[4].size()&&b[3].size()){
    ans=min(b[4][0]+b[3][0],ans);
    ok=1;}
    if(b[1].size()&&b[2].size()){
    ans=min(b[1][0]+b[2][0],ans);
    ok=1;}
    if(b[3].size()&&b[2].size()){
    ans=min(b[3][0]+b[2][0],ans);
    ok=1;}
    if(b[1].size()&&b[3].size()){
    ans=min(b[1][0]+b[3][0],ans);
    ok=1;}
    if(b[6].size()&&b[5].size()&&b[4].size()){
    ans=min(b[6][0]+b[5][0]+b[4][0],ans);
    ok=1;}
    if(!ok){
        return -1;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int cost;
        string j;
        cin>>cost>>j;
        save(cost,j);
    }
    cout<<solve()<<endl;
}

