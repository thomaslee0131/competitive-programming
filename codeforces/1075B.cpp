#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int>drivers;
vector<int>rp;
vector<int>riders;
int co[200010];
int ans[100010];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n+m;i++){
        cin>>co[i];
    }
    int d=0;
    for(int i=0;i<m+n;i++){
        int a;
        cin>>a;
        if(a){
            drivers.push_back(co[i]);
            d++;
        }
        else{
            riders.push_back(co[i]);
            rp.push_back(d);
        }
    }
    for(int i=0;i<n;i++){
        if(rp[i]==0){
            ans[0]++;
            continue;
        }
        if(rp[i]==m){
            ans[m-1]++;
            continue;
        }
        else{
            if(riders[i]-drivers[rp[i]-1]>drivers[rp[i]]-riders[i]){
                ans[rp[i]]++;
            }
            else ans[rp[i]-1]++;
        }
    }
    for(int i=0;i<m;i++){
        cout<<ans[i];
        if(i==m-1)cout<<endl;
        else cout<<' ';
    }
}
