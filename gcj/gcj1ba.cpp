#include<iostream>
using namespace std;
int xt[100010],yt[100010];
void solve(int start,bool ver,int d,int q){
    if(ver){
        for(int i=start;i<=q && i>=0;i+=d){
            yt[i]++;
        }
    }
    else{
        for(int i=start;i<=q && i>=0;i+=d){
            xt[i]++;
        }
    }
}
void reset(){
    for(int i=0;i<100010;i++){
        xt[i]=0;
        yt[i]=0;
    }
}
int main(){
    int t;
    cin>>t;
    for(int I=1;I<=t;I++){
        reset();
        int p,q;
        cin>>p>>q;
        for(int i=0;i<p;i++){
            int x,y;
            char d;
            cin>>x>>y>>d;
            if(d=='N'){
                solve(y+1,1,1,q);
            }
            if(d=='S'){
                solve(y-1,1,-1,q);
            }
            if(d=='E'){
                solve(x+1,0,1,q);
            }
            if(d=='W'){
                solve(x-1,0,-1,q);
            }
        }
        cout<<"Case #"<<I<<": ";
        int ansx=0,ansy=0,maxx=0,maxy=0;
        for(int i=0;i<=q;i++){
            if(xt[i]>maxx){
                maxx=xt[i];
                ansx=i;
            }
        }
        for(int i=0;i<=q;i++){
            if(yt[i]>maxy){
                maxy=yt[i];
                ansy=i;
            }
        }
        cout<<ansx<<' '<<ansy<<endl;
    }
}
