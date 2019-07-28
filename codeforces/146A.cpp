#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c1=0,c2=0;
    //for(int i=0;i<n;i++)cin>>s[i];
    for(int i=0;i<n;i++){
        if(s[i]!='4'  &&  s[i]!='7'){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    for(int i=0;i<n;i++){
        if(i<n/2)c1+=s[i]-'0';
        else c2+=s[i]-'0';
    }
    if(c1==c2)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
