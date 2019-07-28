#include<iostream>
using namespace std;
int board[20][20];
bool good(int x,int y){
    if(x<1||y<1||x>19||x>19){
        return 0;
    }
    return 1;
}
int dx[]={0,1,1,-1};
int dy[]={1,0,1,1};
bool find(int color,int x,int y){
    for(int i=0;i<4;i++){
        int prex=x-dx[i];
        int prey=y-dy[i];
        if(good(prex,prey)&&board[prex][prey]==color){
            continue;
        }
        int cnt=0;
        int nowx=x;
        int nowy=y;
        while(cnt<6&&board[nowx][nowy]==color){
            cnt++;
            nowx+=dx[i];
            nowy+=dy[i];
        }
        if(cnt==5)return 1;
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        for(int i=1;i<20;i++){
            for(int j=1;j<20;j++){
                cin>>board[i][j];
            }
        }
        bool found=0;
        for(int i=1;i<20;i++){
            for(int j=1;j<20;j++){
                if(board[i][j]){
                    found=find(board[i][j],i,j);
                    if(found){
                        cout<<board[i][j]<<endl;
                        cout<<i<<' '<<j<<endl;
                        break;
                    }
                }
            }
            if(found)break;
        }
        if(!found)cout<<0<<endl;
    }
    /*for(int i=1;i<20;i++){
        for(int j=1;j<20;j++){
            out<<board[i][j]<<' ';
        }
        cout<<endl;
    }
    cout<<find(board[3][2],3,2);*/
}
