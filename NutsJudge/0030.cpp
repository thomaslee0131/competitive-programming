#include<iostream>
#include<vector>
using namespace std;
using ll = long long;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<ll> v(n+1, 0);
        vector<ll> presum(n+1, 0);
        for(int i = 1; i <= n; i++){
            cin>>v[i];
            if(i == 1)
                presum[i] = v[i];
            else
                presum[i] = presum[i-1] + v[i];
        }
        int q; cin>>q;
        while(q--){
            int l, r; cin>>l>>r;
            cout<<presum[r]-presum[l-1]<<endl;
        }
    }
}
