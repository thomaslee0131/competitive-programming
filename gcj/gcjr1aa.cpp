#include<iostream>
using namespace std;
void out(int t,string s){
    cout<<"Case #"<<t<<": "<<s<<endl;
}
bool visited[6][6];
int ans[26][2];
bool printed=0;
void dfs(int r,int c,int cnt,int nowr,int nowc){
    if(printed)return;
    if(cnt==r*c){
        for(int i=0;i<r*c;i++){
            cout<<ans[i][0]<<' '<<ans[i][1]<<endl;
        }
        printed=1;
        return;
    }
    for(int rr=1;rr<=r;rr++){
        for(int cc=1;cc<=c;cc++){
            if(visited[rr][cc] || rr==nowr || cc==nowc || rr-cc==nowr-nowc || rr+cc==nowr+nowc){
                continue;
            }
            ans[cnt][0]=rr;
            ans[cnt][1]=cc;
            visited[rr][cc]=1;
            dfs(r,c,cnt+1,rr,cc);
            visited[rr][cc]=0;
        }
    }
}
void init(){
    for(int i=0;i<26;i++){
        ans[i][0]=0;
        ans[i][1]=0;
    }
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            visited[i][j]=0;
        }
    }
}
int main(){
    int t;
    cin>>t;
    for(int I=1;I<=t;I++){
        int r,c;
        printed=0;
        init();
        cin>>r>>c;
        if(r<=3 &&  c<=3){
            out(I,"IMPOSSIBLE");
            continue;
        }
        if((r==4&&c==2)  ||  (r==2&&c==4)){
            out(I,"IMPOSSIBLE");
            continue;
        }
        out(I,"POSSIBLE");
        visited[1][1]=1;
        ans[0][0]=1;
        ans[0][1]=1;
        dfs(r,c,1,1,1);
    }
}
