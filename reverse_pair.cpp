#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int tem[500010];
vector<int>num;
long long ans=0;
void msort(int l,int r){
    if(l==r-1){
        return;
    }
    int m=(l+r)/2;
    msort(l,m);
    msort(m,r);
    int lp=l,rp=m;
    while(lp!=m||rp!=r){
        if(lp==m){
            rp++;
            continue;
        }
        if(rp==r){
            lp++;
            continue;
        }
        if(num[lp]>num[rp]){
            ans+=m-lp;
            rp++;
            continue;
        }
        if(num[lp]<num[rp]){
            lp++;
        }
    }
    sort(num.begin()+l,num.begin()+r);
}
int main(){
    int n;
    while(cin>>n){
        if(!n){
            return 0;
        }
        ans=0;
        num.clear();
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            num.push_back(a);
        }
        msort(0,n);
        cout<<ans<<endl;
    }
}
