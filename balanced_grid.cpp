#include<iostream>
using namespace std;
int dx[]={0,1,0,1};
int dy[]={0,0,1,1};
int ans;
bool grid[3][3];

void printg(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<grid[i][j];
            if(j!=3)cout<<' ';
        }
        cout<<endl;
    }
    cout<<endl;
}

bool count(){
    bool ret=1;
    for(int i=0;i<4;i++){
        int cnt=0;
        for(int x=0;x<2;x++){
            for(int y=0;y<2;y++){
                if(grid[x+dx[i]][y+dy[i]])cnt++;
            }
        }
        if(cnt!=2)ret=0;
    }
    return ret;
}
int ddx[]={0,1,2,0,1,2,0,1,2};
int ddy[]={0,0,0,1,1,1,2,2,2};

void dfs(int p, bool use){
    if(p==9){
        if(count()){
            ans++;
            printg();
        }
        return;
    }
    if(use)grid[ddx[p]][ddy[p]]=1;
    else grid[ddx[p]][ddy[p]]=0;
    dfs(p+1,0);
    dfs(p+1,1);
}

int main(){
    dfs(0,0);
    dfs(0,1);
    cout<<ans<<endl;
    return 0;
}
