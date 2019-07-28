#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
vector<int>a;
vector<int>b;
map<int,map<int,int>>cnt;
int gcd(int n,int m){
    if(n==0){
        return m;
    }
    return gcd(m%n,n);
}
int main(){
    int n;
    cin>>n;
    int ans=0;
    int add=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        b.push_back(x);
    }
    int b0=0;
    for(int i=0;i<n;i++){
        if(!a[i]||!b[i]){
            if(b[i]==0){
                b0++;
            }
            if(!a[i]&&!b[i]){
                add++;
            }
            continue;
        }
        int _gcd=gcd(a[i],b[i]);
        int na=a[i]/_gcd;
        int nb=b[i]/_gcd;
        cnt[na][nb]++;
        ans=max(ans,cnt[na][nb]);
    }
    ans=max(ans+add,b0);
    cout<<ans<<endl;
}
