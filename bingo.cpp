#include<iostream>
#include<vector>
using namespace std;
int order[25];
int board[30][5][5];
int stu[30];
vector<int> score[26];
bool finished[30];
bool check(int id){
    for(int i=0;i<5;i++){
        bool line=1;
        for(int j=0;j<5;j++){
            if(board[id][i][j]!=0){
                line=0;
            }
        }
        if(line)return 1;
    }
    for(int i=0;i<5;i++){
        bool line=1;
        for(int j=0;j<5;j++){
            if(board[id][j][i]!=0){
                line=0;
            }
        }
        if(line)return 1;
    }
    bool line=1;
    for(int i=0;i<5;i++){
        if(board[id][i][i]!=0)line=0;
    }
    if(line)return 1;
    line=1;
    for(int i=0;i<5;i++){
        if(board[id][i][4-i]!=0)line=0;
    }
    if(line)return 1;
    return 0;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            for(int k=0;k<5;k++){
                cin>>board[i][j][k];
            }
        }
    }
    for(int i=0;i<25;i++){
        int num;
        cin>>num;
        for(int j=0;j<n;j++){
            if(finished[j]){
                continue;
            }
            for(int k=0;k<5;k++){
                for(int l=0;l<5;l++){
                    if(board[j][k][l]==num)board[j][k][l]=0;
                }
            }
            if(check(j)){
                score[i+1].push_back(j+1);
                finished[j]=1;
                continue;
            }
        }
    }
    for(int i=1;i<26;i++){
        if(score[i].size()){
            printf("%d: ",i);
            for(int j=0;j<(int)score[i].size();j++){
                printf("%d",score[i][j]);
                if(j==(int)score[i].size()-1)printf("\n");
                else printf(" ");
            }
        }
    }
}
