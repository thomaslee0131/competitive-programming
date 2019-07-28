#include<iostream>
#include <vector>
#include<queue>
bool visited[100];
vector<int> edge [100];
using namespace std;
int main(){
    int t,n,r,u,v,s,d;
    cin>>t;
    for(int I=1;I<=t;I++){
        cin>>n>>r;
        for(int j=1;j<=r;j++){
            cin>>u>>v;
            edge[u].push_back(v);
            edge[v].push_back(u);
        }
        cin>>s>>d;

    }
}
