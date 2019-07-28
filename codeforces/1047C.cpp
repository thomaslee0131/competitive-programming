#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
#include<numeric>
using namespace std;
vector<int>prime;
int num[(int)3e5+10];
bool p[(int)1e4];
map<int,int>m;
void make_prime(){
    for(int i=2;i<1e4;i++){
        if(!p[i]){
            prime.push_back(i);
            for(int j=2*i;j<1e4;j+=i){
                p[j]=1;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    make_prime();
    int _gcd;
    for(int i=0;i<n;i++){
        cin>>num[i];
        if(i==0)_gcd=num[i];
        else _gcd=gcd(_gcd,num[i]);
    }
    for(int i=0;i<n;i++){
        num[i]/=_gcd;
        for(int j=0;prime[j]*prime[j]<=num[i];j++){
            if(num[i]%prime[j]==0){
                m[prime[j]]++;
                while(num[i]%prime[j]==0){
                    num[i]/=prime[j];
                }
            }
        }
        if(num[i]!=1){
            m[num[i]]++;
        }
    }
    int ans=0;
    for(auto k:m){
        ans=max(k.second,ans);
    }
    if(ans){
        cout<<n-ans<<'\n';
    }
    else cout<<-1<<'\n';
}
