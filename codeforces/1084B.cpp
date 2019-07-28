#include<iostream>
#include<algorithm>
using namespace std;
int v[1010];
int main(){
    long long n,s;
    cin>>n>>s;
    long long sum=0;
    long long least=1e9+10;
    for(long long i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
        least=min(least,(long long)v[i]);
    }
    if(sum<s){
        cout<<-1<<endl;
        return 0;
    }
    long long remain=sum-s;
    long long ans=remain/n;
    cout<<min(least,ans)<<endl;
}
