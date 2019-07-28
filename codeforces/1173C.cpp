#include<iostream>
#include<algorithm>
using namespace std;
const int N=2e5+1;
int pos[N], a[N], b[N];
int main(){
    int n; cin>>n;
    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>b[i], pos[b[i]]=i;
    bool tail=true;
	for(int i=1; i<=b[n]; ++i) tail&=pos[i]==n-b[n]+i;
	for(int i=b[n]+1; i<=n; ++i) tail&=pos[i]<i-b[n];
	if(tail) {
		cout<<n-b[n]<<endl;
		return 0;
	}
    /*int cnt=0,last;
    for(int i=n;i>=1;i--){
        if(i==n){
            pre=b[i];
            last=pre;
            continue;
        }
        if(b[i]==pre-1){
            cnt++;
        }
        else break;
        pre=b[i];
    }
    if(last==cnt){
        bool ok=1;
        for(int i=cnt+1;i<=n;i++){
            if(pos[i]==0){
                continue;
            }
            if(pos[i]>=i-cnt+1){
                ok=0;
                break;
            }
        }
        if(ok){
            cout<<b[n]<<endl;
            return 0;
        }
    }*/
    int start=0;
    for(int i=1;i<=n;i++){
        start=max(start,pos[i]-i+1);
    }
    //for(int i=1; i<=n; ++i) if(pos[i]-i+1>start) start=pos[i]-i+1;
    int ans=start+n;
    cout<<ans<<endl;
}
