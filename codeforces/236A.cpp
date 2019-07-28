#include<iostream>
using namespace std;
int main(){
    short ans=1,cnt=1;
    string s;
    cin>>s;
    for(int i=1;i<s.size();i++){
        for(int j=0;j<i;i++){
            if(s[i]==s[j]){
                break;
            }
            if(j==i-1)cnt++;
        }
    }
    if(cnt%2==0)cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
}

