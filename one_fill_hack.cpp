#include<iostream>
#include<vector>
using namespace std;
int outb[30][30];
int stones;
bool blocked[30][30];
int h,w;
bool printed;



void printb(){
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            cout<<outb[j][i];
            if(j!=w)cout<<"   ";
            if(outb[j][i]<=9){cout<<"  ";continue;}
            if(outb[j][i]<100)cout<<' ';
        }
        cout<<'\n';
    }
    return;
}



bool isin(int x,int y){
    return x<=w&&x>=1&&y<=h&&y>=1;
}



int dx[]={1,-1,0,0};
int dy[]={0,0,-1,1};


void visit(int x,int y,int visited){
    outb[x][y]=visited;
    if(w*h==visited+stones&&!printed){
        printb();
        printed=1;
        return;
    }
    for(int i=0;i<4;i++){
        int nowx=x+dx[i],nowy=y+dy[i];
        if(isin(nowx,nowy)==1&&blocked[nowx][nowy]==0){
            blocked[nowx][nowy]=1;
            visit(nowx,nowy,visited+1);
            blocked[nowx][nowy]=0;
        }
    }
}



int main(){
    cout<<"width:\n";
    cin>>w;
    cout<<"height:\n";
    cin>>h;
    cout<<"how many stones are there?\n";
    cin>>stones;
    cout<<"What are the coordinates?\n";
    for(int i=0;i<stones;i++){
        int a,b;
        cin>>a>>b;
        blocked[a][b]=1;
    }
    int sx,sy;
    cout<<"Starting point:\n";
    cin>>sx>>sy;
    blocked[sx][sy]=1;
    visit(sx,sy,1);
    if(!printed){
        cout<<"NO solution!\n";
    }
    //cout<<isin(2,1)<<' '<<blocked[2][1];
}
