#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool yes=true;
        for(int i=0;i<n;i++){
            bool po=false;
            for(int j=-1;j<=1;j++){
                if(j==0)continue;
                for(int k=-1;k<=1;k++){
                    if(k==0)continue;
                    if(s[i]+j==s[n-1-i]+k){
                        po=true;
                    }
                }
            }
            if(po==false){
                yes=false;
            }
        }
        if(yes){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
