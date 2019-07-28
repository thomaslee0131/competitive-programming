#include<iostream>
char a[101][101];
bool c[101][101];
using namespace std;
int main(){
    int n,m;
    //cout<<c[0][0];
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
            if(a[i][j]=='*'){
                c[i][j]=true;
            }
        }
    }
    bool chk=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(c[i][j]==false){
                int l=0;
                if(a[i+1][j]=='*'){
                    l++;    
                }
                if(a[i-1][j]=='*'){
                    l++;    
                }
                if(a[i][j-1]=='*'){
                    l++;    
                }
                if(a[i][j+1]=='*'){
                    l++;    
                }
                if(a[i+1][j+1]=='*'){
                    l++;    
                }
                if(a[i-1][j+1]=='*'){
                    l++;    
                }
                if(a[i+1][j-1]=='*'){
                    l++;    
                }
                if(a[i-1][j-1]=='*'){
                    l++;    
                }
                if(a[i][j]=='.'){
                    if(l==0){
                        cout<<"NO"<<endl;
                        return 0;
                    }
                    else continue;
                }
                if(l!=a[i][j]-'0'){
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"YES"<<endl;
}
