#include<iostream>
#include<vector>
using namespace std;

const int MAXN = 101;
int len[MAXN][MAXN];
int n1, n2;
vector<int> a1, a2;
int cnt;

void init(){
    a1.clear(); a2.clear();
    for(int i=0;i<n1;i++){
        int x; cin>>x;
        a1.push_back(x);
    }
    for(int i=0;i<n2;i++){
        int x; cin>>x;
        a2.push_back(x);
    }
}

void solve(){
    for(int i=1;i<=n1;i++){
        for(int j=1;j<=n2;j++){
            int I = i-1, J = j-1;
            if(a1[I] == a2[J]){
                len[i][j] = len[i-1][j-1] + 1;
            }
            else{
                len[i][j] = max(len[i][j-1], len[i-1][j]);
            }
        }
    }
    cout<<"Twin Towers #"<<cnt<<endl;
    cout<<"Number of Tiles : "<<len[n1][n2]<<endl<<endl;
}

int main(){
    while(cin>>n1>>n2){
        if(!n1 && !n2){
            break;
        }
        cnt ++;
        init();
        solve();
    }
}
