#include<iostream>
using namespace std;
char s[300010];
int main(){
    long long n,x,y,cnt=0;
    cin>>n>>x>>y;
    bool zero=0;
    for(int i=0;i<n;i++){
        cin>>s[i];
        if(zero&&s[i]=='1'){cnt++;zero=0;}
        if(s[i]=='0')zero=1;
    }
    if(zero)cnt++;
    if(cnt==0){
        cout<<0<<endl;
        return 0;
    }
    printf("%lld\n",x*(cnt-1)+y>y*cnt?y*cnt:x*(cnt-1)+y);
}
