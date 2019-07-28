#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int m[1010];
int s[1010];
int p[1010];
int r,b,c;
bool chk(long long x){
    vector<long long>z;
    for(int i=0;i<c;i++){
        long long t=(x-p[i])/s[i];
        t=min(t,(long long)m[i]);
        z.push_back(t);
    }
    long long sum=0;
    sort(z.rbegin(),z.rend());
    for(int i=0;i<r;i++){
        if(z[i]<0){
            continue;
        }
        sum+=z[i];
    }
    if(sum>=b)return 1;
    else return 0;
}
int main(){
    int T;
    cin>>T;
    for(int I=1;I<=T;I++){
        cin>>r>>b>>c;
        for(int i=0;i<c;i++){
            cin>>m[i]>>s[i]>>p[i];
        }
        long long L=1,R=1e18+1e9;
        while(L+1!=R){
            long long mid=(L+R)/2;
            if(chk(mid)==true){
                R=mid;
            }
            else L=mid;
        }
        cout<<"Case #"<<I<<": "<<R<<endl;
    }
}
