#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n, k; cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int ans = 0;
    for(int i=n-1;i>=0;i-=k){
        ans += 2 * (v[i]-1);
    }
    cout<<ans<<endl;
}
