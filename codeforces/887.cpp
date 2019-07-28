#include<iostream>
using namespace std;
int main(){
    string s;
    int c=0,cnt=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0')cnt++;
        if(s[i]=='1')break;
    }
    for(int i=cnt;i<s.size();i++){
        if(s[i]=='0')c++;
    }
    if(c>=6)cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}
