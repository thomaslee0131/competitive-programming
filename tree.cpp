#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int I=1;I<=t;I++){
        int n,k;
        vector<pair<int,pair<int,int>>>p;
        cin>>n>>k;
        for(int i=1;i<=n;i++){
            int a,b;
            cin>>a>>b;
            p.push_back{i,{a,b}};
        }
    }
}
