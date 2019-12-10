#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int ans;
int main(){
    int t; cin>>t;
    while(t--){
        ans = 0;
        int n; cin>>n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin>>v[i];
        sort(v.begin(), v.end(), [](int a, int b){
            ans++;
            return a<b;
        });
        cout<<ans<<endl;
    }
}

