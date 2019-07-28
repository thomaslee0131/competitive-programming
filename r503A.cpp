#include<iostream>
using namespace std;
int n,k,h,a,b;
int main(){
    cin>>n>>h>>a>>b>>k;
    for(int i=0;i<k;i++){
        int ta,fa,tb,fb,ans=0;
        cin>>ta>>fa>>tb>>fb;
        if(ta==tb){
            if(fa>fb)cout<<fa-fb<<endl;
            else cout<<fb-fa<<endl;
            continue;
        }
        int cf=fa;
        if(fa<a){ans+=a-fa;cf=a;}
        if(fa>b){ans+=fa-b;cf=b;}
        if(fb>cf)ans+=fb-cf;
        if(fb<cf)ans+=cf-fb;
        if(ta>tb)ans+=ta-tb;
        if(ta<tb)ans+=tb-ta;
        cout<<ans<<endl;
    }
}
