#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
struct edge{
    int from,to,cost;
};
int dis[1010];
vector<edge> v;
int main(){
    
    int c,n,m;
    cin>>c;
    while(c--){
        cin>>n>>m;
        for(int i=0;i<n;i++){
            dis[i]=0;
        }
        v.clear();
        for(int i=0;i<m;i++){
            edge tmp;
            cin >> tmp.from >> tmp.to >>tmp.cost;
            v.push_back(tmp);
        }
        bool z=0;
        for(int i=0;i<=n;i++){
            for(int j=0;j<(int)v.size();j++){
                int mi=min(dis[v[j].to],dis[v[j].from]+v[j].cost);
                if(i==n&&dis[v[j].to]>mi){
                    z=1;
                }
                dis[v[j].to]=mi;
            }
        }
        if(z){
            cout<<"possible"<<endl;
        }
        else cout<<"not possible"<<endl;
    }
}
