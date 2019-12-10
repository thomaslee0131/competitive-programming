#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
using pipii = pair<int, pair<int, int>>;
int main(){
    int t; cin>>t;
    while(t--){
        vector<pipii> v(0);
        int n; cin>>n;
        for(int i = 0; i < n; i++){
            int l, r, w; cin>>l>>r>>w;
            v.push_back({w, {l, r}});
        }
        sort(v.begin(), v.end(), [](pipii a, pipii b){
            if(a.first != b.first)
                return a.first < b.first;
            else if(a.second.first+a.second.second != b.second.first+b.second.second)
                return a.second.first+a.second.second < b.second.first+b.second.second;
            else
                return a.second.first < b.second.first;
        });
        for(int i = 0; i < n; i++){
            cout<<v[i].second.first<<' '<<v[i].second.second<<' '<<v[i].first<<endl;
        }
    }
}
