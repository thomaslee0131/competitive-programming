#include<iostream>
using namespace std;
char a[510][510];
int main(){
    int r,c;
    cin>>r>>c;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if(a[i][j]=='S'){
                if(a[i+1][j]=='W'||a[i-1][j]=='W'||a[i][j+1]=='W'||a[i][j-1]=='W'){
                    cout<<"No"<<endl;
                    return 0;
                }
            }
            if(a[i][j]=='.')a[i][j]='D';
        }
        
    }
    cout<<"Yes"<<endl;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cout<<a[i][j];
        }
        cout<<endl;

    }
}
