#include <iostream>
#include<string>
using namespace std;
int main(){
    string n;
    int t;
    cin>>t;
    for(int I=1;I<=t;I++){
        cin>>n;
        while(1){
            bool a=true;
            for(int i=1;i<n.size();i++){
                if(n[i]<n[i-1]){
                    n[i-1]--;
                    a=false;
                    for(int j=i;j<n.size();j++){
                        n[j]='9';
                    }
                }
            }
            if(a==true){
                bool b=false;
                cout<<"Case #"<<I<<": ";
                for(int i=0;i<n.size();i++){
                    if(n[i]!='0'){
                        b=true;
                    }
                    if(n[i]=='0'&&b==false){
                        continue;
                    }
                    else cout<<n[i];
                }
                cout<<endl;
                break;
            }
        }
    }
}
