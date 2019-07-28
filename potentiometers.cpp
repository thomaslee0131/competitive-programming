#include<iostream>
using namespace std;
const int MAXN=2e5+6;
int a[MAXN];
int seg[MAXN*4];
void build(int l,int r,int x){
    if(l==r-1){
        seg[x]=a[l];
        return;
    }
    int mid=(l+r)/2;
    build(l,mid,x*2);
    build(mid,r,x*2+1);
    seg[x]=seg[x*2]+seg[x*2+1];
}
void update(int l,int r,int x,int val,int X){
    if(l==r-1){
        seg[x]=val;
        return;
    }
    int mid=(l+r)/2;
    if(X<mid){
        update(l,mid,x*2,val,X);
    }
    else{
        update(mid,r,x*2+1,val,X);
    }
    seg[x]=seg[x*2]+seg[x*2+1];
}
long long measure(int l,int r,int x,int L,int R){
    //cout<<l<<' '<<r<<' '<<x<<endl;
    if(L<=l && r<=R)return seg[x];
    int mid=(l+r)/2;
    long long ret=0;
    if(L<mid){
        ret+=measure(l,mid,x*2,L,R);
    }
    if(R>mid){
        ret+=measure(mid,r,x*2+1,L,R);
    }
    return ret;
}
int main(){
    cin.tie(0);
    std::ios_base::sync_with_stdio(false);
    int n;
    int Case=1;
    while(cin>>n){
        if(n==0)break;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        build(0,n,1);
        string s;
        if(Case!=1)cout<<endl;
        cout<<"Case "<<Case<<":"<<endl;
        while(cin>>s){
            if(s[0]=='E'){
                break;
            }
            int x,y;
            cin>>x>>y;
            x--;
            if(s[0]=='S'){
                update(0,n,1,y,x);
            }
            if(s[0]=='M'){
                cout<<measure(0,n,1,x,y)<<endl;
            }
        }
        /*for(int i=1;i<10;i++){
            cout<<seg[i]<<endl;
        }*/
        Case++;
    }
}
