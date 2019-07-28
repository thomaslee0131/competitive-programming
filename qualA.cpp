#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int I=1;I<=t;I++){
        string s;
        int d;
        cin>>d>>s;
        int tim=0,p=0;

        for(int i=s.size()-1;i>=0;i++){
            int dam=0,num=1;
            for(int j=0;j<s.size();j++){
                if(s[i]=='S'){dam=dam+num;p++;}
                else num=num*2;
            
                if(p>d){
                    cout<<"Case #"<<I<<": "<<"IMPOSSIBLE"<<endl;
                    break;
                }
                if(dam>d){
                    if(s[i]=='S'){
                        if(s[i-1]=='C'){
                            char ch=s[i];
                            s[i]=s[i-1];
                            s[i-1]=ch;
                            tim++;
                        }
                    }
                }
            }
        }
        cout<<"Case #"<<I<<": "<<tim;
    }
}
