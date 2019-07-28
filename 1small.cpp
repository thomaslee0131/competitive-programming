#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int I=1;I<=t;I++){
        string s;
        int d,sn=0,b;
        cin>>d>>s;
        bool a=false;
        for(int i=0;i<s.size();i++){
            if(s[i]=='C'){
                a=true;
                b=i;
            }
            if(s[i]=='S'){
                sn++;
            }
        }
        if(a==false){
            if(sn>d){
                cout<<"Case #"<<I<<": IMPOSSIBLE"<<endl;
            }
            if(sn<=d){
                cout<<"Case #"<<I<<": "<<0<<endl;
            }
        }
        if(a==true){
            if(sn>d){
                cout<<"Case #"<<I<<": IMPOSSIBLE"<<endl;
            }
            if(sn<=d){
                int tim=0;
                while(1){
                    int num=1,dam=0;
                    for(int j=0;j<s.size();j++){
                        if(s[j]=='C'){
                            num=num*2;

                        }
                        if(s[j]=='S'){
                            dam=dam+num;
                        }
                    }
                    
                    if(dam<=d){
                        cout<<"Case #"<<I<<": "<<tim<<endl;
                        break;
                    }
                    if(dam>d){
                        for(int i=s.size()-1;i>=0;i--){
                            if(s[i]=='S' && s[i-1]=='C'){
                                s[i]='C';
                                s[i-1]='S';
                                tim++;
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
}
