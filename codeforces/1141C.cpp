#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<long long>v;
vector<long long>sortv;
int main(){
    int n;cin>>n;
    long long pre=1,sma=1;
    v.push_back(1);
    for(int i=0;i<n-1;i++){
        long long a;cin>>a;
        a+=pre;
        v.push_back(a);
        sma=min(a,sma);
        pre=a;
    }
    for(int i:v){
        sortv.push_back(i);
    }
    sort(sortv.begin(),sortv.end());
    int p;
    for(int i=0;i<(int)sortv.size();i++){
        if(i==0){
            p=sortv[0];
            continue;
        }
        if(sortv[i]!=p+1){
            cout<<-1<<endl;
            return 0;
        }
        p=sortv[i];
    }
    int add=1-sma;
    for(int i=0;i<(int)v.size();i++){
        cout<<v[i]+add;
        if(i==(int)v.size()-1)cout<<endl;
        else cout<<' ';
    }
}
