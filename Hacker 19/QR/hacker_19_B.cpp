#include<iostream>
using namespace std;
int main(){
    int t; cin>>t;
    for(int I=1;I<=t;I++){
        string s; cin>>s;
        int b=0, n=s.length();
        for(char c:s) if(c=='B') b++;
        if(n-1==b  ||  b==0){
            cout<<"Case #"<<I<<": N"<<endl;
            continue;
        }
        if(n==3  &&  b==1){
            cout<<"Case #"<<I<<": Y"<<endl;
            continue;
        }
        if(b>=2) cout<<"Case #"<<I<<": Y"<<endl;
        else cout<<"Case #"<<I<<": N"<<endl;
    }
}
