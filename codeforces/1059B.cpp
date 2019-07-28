#include<iostream>
using namespace std;
int n,m;
char sig[1000][1000];
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>sig[i][j];
        }
    }
    bool d=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(sig[i][j]=='#'){
                bool c=0;
                for(int k=-1;k<=1;k++){
                    for(int l=-1;l<=1;l++){
                        if(k==0&&l==0){
                            continue;
                        }
                        if(i+k<0||i+k>=n||j+l<0||j+l>=m){
                            continue;
                        }
                        if(sig[i+k][j+l]=='.'){
                            c=1;
                        }
                    }
                }
                if(!c){
                    d=0;
                }
            }
        }
    }
    if(d){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}
