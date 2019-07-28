#include<iostream>
#include<algorithm>
using namespace std;
int at[26];
int bt[26];
int ct[26];
int nowb,nowc;
int solve(int c,int t[]){
    for(int i=0;i<26;i++){
        t[i]-=bt[i]*c;
        if(t[i]<0){
            return -1;
        }
    }
    int cnt=0;
    while(1){
        bool ok=1;
        for(int i=0;i<26;i++){
            t[i]-=ct[i];
            if(t[i]<0){
                ok=0;
            }
        }
        if(!ok){
            return cnt;
        }
        else cnt++;
    }
}
int main(){
    string a,b,c;
    cin>>a>>b>>c;
    for(int i=0;i<(int)a.size();i++){
        at[a[i]-'a']++;
    }
    for(int i=0;i<(int)b.size();i++){
        bt[b[i]-'a']++;
    }
    for(int i=0;i<(int)c.size();i++){
        ct[c[i]-'a']++;
    }
    int count=0,ans=0;
    while(1){
        int t[26];
        for(int i=0;i<26;i++){
            t[i]=at[i];
        }
        int s=count+solve(count,t);
        ans=max(ans,s);
        if(ans==s){
            nowb=count;
            nowc=s-count;
        }
        if(s-count<0){
            break;
        }
        count++;
    }
    for(int i=0;i<nowb;i++){
        cout<<b;
        for(int j=0;j<26;j++){
            at[j]-=bt[j];
        }
    }
    for(int i=0;i<nowc;i++){
        cout<<c;
        for(int j=0;j<26;j++){
            at[j]-=ct[j];
        }
    }
    for(int i=0;i<26;i++){
        for(int j=0;j<at[i];j++){
            cout<<i+'a';
        }
    }
    cout<<endl;
        
}
