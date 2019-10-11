#include<iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>

using namespace std;

int l[32][32];
int s[32][32];
string s1, s2;
int n1, n2;
int cas;

void init(){
    std::getline(cin, s1); std::getline(cin, s2);
    n1 = s1.length(); n2 = s2.length();
    memset(l, 0, sizeof(l));
    memset(s, 0, sizeof(s));
}

void solve(){
    for(int i=0;i<=n1;i++) s[i][0] = 1;
    for(int i=0;i<=n2;i++) s[0][i] = 1;

    for(int i=1;i<=n1;i++){
        for(int j=1;j<=n2;j++){
            int I = i-1, J = j-1;
            if(s1[I] == s2[J]){
                l[i][j] = l[i-1][j-1] + 1;
                s[i][j] = s[i-1][j-1];
            }
            else if(l[i][j-1] > l[i-1][j]){
                l[i][j] = l[i][j-1];
                s[i][j] = s[i][j-1];
            }
            else if(l[i][j-1] < l[i-1][j]){
                l[i][j] = l[i-1][j];
                s[i][j] = s[i-1][j];
            }
            else{
                l[i][j] = l[i-1][j];
                s[i][j] = s[i-1][j] + s[i][j-1];
            }
        }
    }
    cout<<"Case #"<<cas<<": "<<n1+n2-l[n1][n2]<<' '<<s[n1][n2]<<endl;
}

int main(){
    int t; cin>>t;
    getchar();
    while(cas < t){
        cas ++;
        init();
        solve();
    }
}
