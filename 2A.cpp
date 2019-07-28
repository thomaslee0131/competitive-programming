#include<iostream>
#include<map>
using namespace std;
map<string,vector<int>>m;
int main(){
    int n,mx=0;
    string ans;
    cin>>n;
    for(int i=0;i<n;i++){
        string nm;
        int sc;
        cin>>nm>>sc;
        if(m[nm].size()==0){
            m[nm][0]+=sc;
        }
        else{
            m[nm].push_back(sc);
        }
        for(int i=(int)m[nm].size();i<=m[nm][0]){
            m[nm].push_back(i)
        }
    }
    vector<string>pos;
    for(auto const& [key, val] : m){
        if(val[0]>mx){
            pos.clear();
            pos.push_back(key);
            mx=val[0];
        }
        if(val[0]==mx){
            pos.push_back(key);
        }
    }
    int first=-1;
    for(int i=0;i<(int)pos.size();i++){
        if(m[pos[i]][mx]>first){
            ans=pos[i];
            first=m[pos[i][mx]];
        }
    }
    cout<<ans<<endl;
}
