#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int o=0,m=0;
    for(int i=0;i<(int)s.size();i++){
        if(s[i]=='o'){
            o++;
        }
        else m++;
    }
    if(o!=0&&m!=0){
        if(m%o!=0){cout<<"NO"<<endl;return 0;}
    }
    cout<<"YES"<<endl;
}
