#include<iostream>
#include<vector>
#include<map>
using namespace std;
vector<int> rep;
string w[100010];
map<string,int>gr;
int main(){
    int n,k,m;
    cin>>n>>k>>m;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        w[i]=s;
        gr[s]=0;
    }
    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        gr[w[i]]=b;
    }
    for(int i=0;i<k;i++){
        int num,minn=10e9;
        cin>>num;
        for(int j=0;j<num;j++){
            int a;
            cin>>a;
            
        }
    }
    long long ans=0;
    for(int i=0;i<m;i++){
        string st;
        cin>>st;
        ans+=gr[st];
    }
}
