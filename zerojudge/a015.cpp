#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int a[100][100];
int n,m;

void init(){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
}

void solve(){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[j][i];
            if(j==n-1)cout<<endl;
            else cout<<' ';
        }
    }
}

int main(){
    while(cin>>n>>m){
        init();
        solve();
    }
}
