#include<iostream>
using namespace std;
string s;
void chk(int i){
    if(i==0)return;
    if(s[i]-'0'==-1){
        s[i]='9';
        s[i-1]--;
        chk(i-1);
    }
    return;
}
int main(){
    cin>>s;
    int ans=0;
    for(int i=int(s.size())-1;i>=0;i--){
        if(i==0){
            ans+=s[i]-'0';
            break;
        }
        if(s[i]=='9'){
            ans+=9;
            continue;
        }
        ans+=s[i]+10-'0';
        //cout<<"+"<<s[i]+10-'0'<<endl;
        s[i-1]--;
        chk(i-1);
    }
    //cout<<s<<endl;
    cout<<ans<<endl;
}
