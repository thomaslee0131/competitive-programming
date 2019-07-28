#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int I=1;I<=t;I++){
        string s;
        cin>>s;//aaaa
        if((int)s.size()==1){
            cout<<"Case #"<<I<<": Impossible"<<endl;
        }
        for(int i=1;i<(int)s.size();i++){
            if(s[0]==s[i]){
                bool c=true;
                for(int j=0;j<(int)s.size()-i;j++){
                    if(s[j]!=s[j+i]){
                        c=false;
                    }
                }
                //cout<<"C="<<c<<endl;
                if(c==false){
                    cout<<"Case #"<<I<<": ";
                    for(int j=0;j<i;j++){
                        cout<<s[j];
                    }
                    cout<<s<<endl;
                    break;
                }
            }
            if(i==(int)s.size()-1){
                cout<<"Case #"<<I<<": Impossible"<<endl;
            }
        }
    }
}

