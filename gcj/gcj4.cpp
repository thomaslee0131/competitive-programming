#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int I=1;I<=t;I++){
        int n,b,f;
        cin>>n>>b>>f;
        int m=16;
        string s[5];
        f=5;
        while(f--){
            bool out=0;
            for(int i=1;i<=n;i++){
                cout<<out;
                if(i%m==0){
                    out=!out;
                }
            }
            m/=2;
            cout<<endl;
            cin>>s[4-f];
        }
        char pre='0';
        int add=0;
        map<int,int>ok;
        for(int i=0;i<n-b;i++){
            if(pre!=s[0][i]){
                pre=s[0][i];
                add+=16;
            }
            int a=0;
            for(int j=4;j>0;j--){
                if(s[j][i]=='1'){
                    a+=(1<<(4-j));
                    //cout<<a<<endl;
                }
            }
            ok[a+add]=1;
        }
        for(int i=0;i<n;i++){
            if(!ok[i]){
                cout<<i<<' ';
            }
        }
        cout<<endl;
        int z;
        cin>>z;
    }
}
