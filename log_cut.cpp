#include<iostream>
#include<algorithm>
using namespace std;
int cut[52];
bool visited[52][52];
int ans[52][52];
int f(int i,int j){
    if(i==j)return 0;
    if(visited[i][j]==true){
        return ans[i][j];
    }
    visited[i][j]=true;
    int len=cut[j+1]-cut[i];
    int pr=99999999;
    for(int a=i;a<j;a++){
        int l =f(i,a);
        int r =f(a+1,j);
        pr=min(pr,l+r+len);
    }
    ans[i][j]=pr;
    return pr;
}
int main(){
    int l;
    while(cin>>l){
        if(l==0)break;
        int n;
        cin>>n;
        for(int I=1;I<=n;I++){
            cin>>cut[I];
        }
        cut[n+1]=l;
        cout<<"The minimum cutting is "<<f(0,n)<<"."<<endl;
        for(int i=0;i<52;i++){
            for(int j=0;j<52;j++){
                visited[i][j]=0;
                ans[i][j]=0;
            }
        }
    }
}
