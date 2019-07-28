#include<iostream>
using namespace std;
int main(){
    int t,k;
    cin>>t;
    string s;
    for(int I=1;I<=t;I++){
        cin>>s>>k;
        int c=0;
        bool o=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='-'){
                if(i>=s.size()-k+1){
                    cout<<"Case #"<<I<<": IMPOSSIBLE"<<endl;
                    o=1;
                    break;
                }
                c++;
                for(int j=1;j<k;j++){
                    if(s[i+j]=='-')s[i+j]='+';
                    else s[i+j]='-';
                }
            }
        }
        if(o==0)
            cout<<"Case #"<<I<<": "<<c<<endl;
    }
}
