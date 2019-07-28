#include<iostream>
using namespace std;
char board[4][4];
bool out(int a,int b){
    return a>3||a<1||b>3||b<1;
}
void printb(){
    cout<<"  1 2 3"<<endl;
    for(int i=1;i<4;i++){
        cout<<i<<' ';
        for(int j=1;j<4;j++){
            cout<<board[i][j]<<' ';
        }
        cout<<endl;
    }
}
int win(){
    for(int i=1;i<4;i++){
        bool line=1;
        for(int j=1;j<4;j++){
            if(board[i][j]!='O')line=0;
        }
        if(line)return 1;
    }
    for(int i=1;i<4;i++){
        bool line=1;
        for(int j=1;j<4;j++){
            if(board[i][j]!='X')line=0;
        }
        if(line)return 2;
    }
    for(int i=1;i<4;i++){
        bool line=1;
        for(int j=1;j<4;j++){
            if(board[j][i]!='O')line=0;
        }
        if(line)return 1;
    }
    for(int i=1;i<4;i++){
        bool line=1;
        for(int j=1;j<4;j++){
            if(board[j][i]!='X')line=0;
        }
        if(line)return 2;
    }
    bool line=1;
    for(int i=1;i<4;i++){
        if(board[i][i]!='O')line=0;
    }
    if(line)return 1;
    line=1;
    for(int i=1;i<4;i++){
        if(board[i][i]!='X')line=0;
    }
    if(line)return 2;
    line=1;
    for(int i=1;i<4;i++){
        if(board[i][4-i]!='O')line=0;
    }
    if(line)return 1;
    line=1;
    for(int i=1;i<4;i++){
        if(board[i][4-i]!='X')line=0;
    }
    if(line)return 2;
    return 3;
}
int main(){
    for(int i=1;i<4;i++){
        for(int j=1;j<4;j++){
            board[i][j]='.';
        }
    }
    printb();
    bool over=0;
    int cnt=0;
    while(!over){
        if(cnt%2==0){
            cout<<"player_one:"<<endl;
            int x,y;
            cin>>x>>y;
            if(out(x,y)){
                cout<<"Take some medicine, bitch!"<<endl;
                continue;
            }
            if(board[x][y]!='.'||x==0||y==0){
                cout<<"error"<<endl;
                continue;
            }
            board[x][y]='O';
            printb();
        }
        if(cnt%2==1){
            cout<<"player_two:"<<endl;
            int x,y;
            cin>>x>>y;
            if(out(x,y)){
                cout<<"Take some medicine, bitch!"<<endl;
                continue;
            }
            if(board[x][y]!='.'||x==0||y==0||x>3||y>3){
                cout<<"error"<<endl;
                continue;
            }
            board[x][y]='X';
            printb();
        }
        cnt++;
        int winner=win();
        if(cnt==9&&winner==3){
            cout<<"draw"<<endl;
            over=1;
        }
        if(winner!=3){
            cout<<"player"<<winner<<" wins"<<endl;
            over=1;
        }
    }
    cout<<"game over"<<endl;
}

