#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int xnum[2002];
int t[2002];
int num[2002];
vector<int>large;
int main(){
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>num[i];
        xnum[i]=num[i];
    }
    int ans=0;
    sort(num,num+n);
    for(int i=n-1;i>=n-k;i--){
        t[num[i]]++;
        ans+=num[i];
    }
    cout<<ans<<endl;
    int pos=-1;
    int cnt=0;
    bool first=1;
    for(int i=0;i<n;i++){
        if(t[xnum[i]]){
            if(!first){
                cout<<' ';
            }
            else first=0;
            if(cnt==k-1){
                cout<<n-1-pos;
                break;
            }
            cout<<i-pos;
            cnt++;
            pos=i;
            t[xnum[i]]--;
        }
    }
    cout<<endl;
}
