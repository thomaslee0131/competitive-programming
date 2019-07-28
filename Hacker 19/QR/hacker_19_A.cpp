#include<iostream>
using namespace std;
int main(){
    int t; cin>>t;
    for(int I=1;I<=t;I++){
        string s; cin>>s;
        int n=s.length();
        int b=0;
        for(char c:s){
            if(c=='B')b++;
        }
        if(n-1-b==0){
            cout<<"Case #"<<I<<": N"<<endl;
            continue;
        }
        if(n%2!=0){
            n--;
        }
        if(b>=n/2){
            cout<<"Case #"<<I<<": Y"<<endl;
        }
        else{
            cout<<"Case #"<<I<<": N"<<endl;
        }
    }
}
