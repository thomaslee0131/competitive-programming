#include<iostream>
using namespace std;
int main(){
    int t,m,c=0,d=0;
    string s;
    cin>>t;
    for(int i=1;i<=t;i++){
        c=0;
        d=0;
        cin>>s>>m;
        if(m==2){
            if((s.back()-'0')%2==0)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        if(m==3){
            for(int i=0;i<s.size();i++){
                c=c+(s[i]-'0');
            }
            if(c%3==0)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        if(m==4){
            if(s.size()>=2){
                if((s[s.size()-2]*10+s.back()-'0')%4==0)cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
            }
            else{if((s[0]-'0')%4==0)cout<<"Yes"<<endl; else cout<<"No"<<endl;}
        }
        if(m==5){
            if(s.back()=='0'  ||  s.back()=='5')cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        if(m==6){
            for(int i=0;i<s.size();i++){
                c=c+(s[i]-'0');
            }
            if((s.back()-'0')%2==0  &&  c%3==0)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        if(m==8){
            if(s.size()>=3){
                if((s[s.size()-3]*100+s[s.size()-2]*10+s[s.size()-1])%8==0)cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
            }
            if(s.size()==2){
                if((s[0]-'0'*10+s[1]-'0')%8==0)cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
            } 
            if(s.size()==1){
                if(s[0]-'0'==8)cout<<"Yes"<<endl;
                else cout<<"No"<<endl;}
        }
        if(m==9){
            for(int i=0;i<s.size();i++){
                c=c+(s[i]-'0');
            }
            if(c%9==0)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        if(m==10){
            if(s.back()-'0'==0)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        if(m==11){
            for(int i=0;i<s.size();i++){
                if(i%2==0)c=c+(s[i]-'0');
                else d=d+(s[i]-'0');   
            }
            if((c-d)%11==0)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
}
