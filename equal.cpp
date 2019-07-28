#include<iostream>
using namespace std;
int N;
int negt[9];
int val[100];
int _pre[9][1010];
int negv[9];

int& pre(int i,int j){
    return _pre[i][j+500];
}

bool _dp[9][1010];

bool& dp(int aval,int idx){
    return _dp[aval][idx+500];
}

int main(){
    cin>>N;
    int p=0,pi=0;
    for(int i=0;i<N;i++){
        cin>>val[i];
        if(val[i]<0){
            if(i<N/2){
                negt[-val[i]]++;
            }
            else{
                negt[-val[i]]--;
            }
            continue;
        }
        else{
            if(i<N/2){
                p+=val[i];
            }
            else{
                pi+=val[i];
            }
        }
    }
    int d=pi-p;
    dp(0,0)=1;
    for(int i=1;i<9;i++){
        for(int j=-500;j<=500;j++){
            for(int k=1;k<=10;k++){
                if(j-negt[i]*k>=-500 && j-negt[i]*k<=500){
                    dp(i,j)=dp(i-1,j-negt[i]*k);
                    if(dp(i,j)==1){
                        pre(i,j)=k;
                        break;
                    }
                }
            }
        }
    }
    if(dp(8,d)==0){
        cout<<-1<<endl;
    }
    else{
        int nowi=8,nowd=d;
        while(nowi){
            negv[nowi]=pre(nowi,nowd);
            nowd-=pre(nowi,nowd)*negt[nowi];
            nowi--;
        }
        for(int i=0;i<N;i++){
            if(val[i]>0){
                cout<<val[i];
            }
            else{
                cout<<negv[-val[i]];
            }
            if(i==N-1){
                cout<<endl;
            }
            else cout<<' ';
        }
    }
}
