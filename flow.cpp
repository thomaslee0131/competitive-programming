#include<iostream>
using namespace std;
char cells[3][1001];
int main(){
    int t;
    cin>>t;
    for(int I=1;I<=t;I++){
        int n;
        cin>>n;
        for(int j=0;j<3;j++){
            for(int i=0;i<n;i++){
            cin>>cells[j][i];
            }
        }
        if(n%2==1){
            cout<<"Case #"<<I<<": "<<0<<endl; 
            continue;
        }
        if(cells[0][0]=='#'||cells[1][0]=='#'||cells[1][n-1]=='#'||cells[2][n-1]=='#'){
            cout<<"Case #"<<I<<": "<<0<<endl;
            continue;
        }
        long long ans=1;
        for(int i=0;i<=(n-2)/2-1;i++){
            int ti=2;
            if(cells[0][i*2+1]=='#'||cells[0][i*2+2]=='#'){
                ti--;
            }
            if(cells[2][i*2+1]=='#'||cells[2][i*2+2]=='#'){
                ti--;
            }
            if(cells[1][i*2+1]=='#'||cells[1][i*2+2]=='#'){
                ti=0;
            }
            ans=ans*ti;
            ans=ans%1000000007;
        }
        cout<<"Case #"<<I<<": "<<ans%1000000007<<endl; 
    }
}
