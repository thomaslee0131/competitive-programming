#include<iostream>
#include<string>
using namespace std;
int fail[10010];
void make_fail(const string &s){
    int now=-1;
    fail[0]=-1;
    for(int i=1;i<(int)s.length();i++){
        while(now>-1 && s[now+1]!=s[i])now=fail[now];
        if(s[now+1]==s[i]){
            now++;
        }
        fail[i]=now;
    }
}
int solve(const string &s,const string &l){
    int ret=0;
    int now=-1;
    for(int i=0;i<(int)l.length();i++){
        while(now>-1 && l[i]!=s[now+1])now=fail[now];
        if(s[now+1]==l[i]){
            now++;
        }
        if(now==(int)s.length()-1){
            ret++;
        }
    } 
    return ret;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<10010;i++)fail[i]=0;
        string s,l;
        cin>>s>>l;
        make_fail(s);
        cout<<solve(s,l)<<endl;
    }
}
