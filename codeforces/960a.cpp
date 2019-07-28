#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool b=true;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='b'){
            if(s[i+1]=='a'){
                cout<<"NO"<<endl;
                b=false;
            }
        }
        if(s[i]=='c'){
            if(s[i+1]!='c'){
                cout<<"NO"<<endl;
                b=false;
            }
        }
    }
    if(b==true){
        cout<<"YES"<<endl;
    }
}
