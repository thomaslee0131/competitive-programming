#include<iostream>
using namespace std;
const int MAXN=2e5+6;
int a[MAXN];
int n;
int bit[MAXN];
long long query(int p){
    long long ret=0;
    for(;p;p-=p&(-p)){
        ret+=bit[p];
    }
    return ret;
}
void mod(int x,long long val){
    long long orig=query(x)-query(x-1);
    long long diff=val-orig;
    for(;x<=n;x+=x&(-x)){
        bit[x]+=diff;
    }
}
int main(){
    cin.tie(0);
    std::ios_base::sync_with_stdio(false);
    int Case=1;
    while(cin>>n){
        if(n==0)break;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            mod(i,a[i]);
        }
        string s;
        if(Case!=1)cout<<endl;
        cout<<"Case "<<Case<<":"<<endl;
        while(cin>>s){
            if(s[0]=='E'){
                break;
            }
            int x,y;
            cin>>x>>y;
            if(s[0]=='S'){
                mod(x,y);
            }
            if(s[0]=='M'){
                cout<<query(y)-query(x-1)<<endl;
            }
        }
        /*for(int i=1;i<10;i++){
            cout<<seg[i]<<endl;
        }*/
        Case++;
    }
}

