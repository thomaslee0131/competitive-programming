#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int num[106];
vector<int>cuts;
int _abs(int a){
    if(a<0){
        return -a;
    }
    return a;
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int odd=0,even=0;
    for(int i=0;i<n-1;i++){
        if(num[i]%2){
            odd++;
        }
        else even++;
        if(odd==even){
            cuts.push_back(_abs(num[i]-num[i+1]));
        }
    }
    int sum=0,ans=0;
    sort(cuts.begin(),cuts.end());
    for(int i=0;i<(int)cuts.size();i++){
        sum+=cuts[i];
        if(sum<=m){
            ans++;
        }
        else break;
    }
    cout<<ans<<endl;
}
