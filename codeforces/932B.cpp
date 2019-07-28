#include<iostream>
using namespace std;
int dfs(int x){
    int z=1,c=1;
    for(int i=1;i<=6;i++){
        z=z*10;
        if(x/z==0){
            break;
        }
        else c++;
    }
    int t=1;
    for(int i=1;i<=c;i++){
        if(x%10!=0){
            t=t*(x%10);
            x=x/10;
        }
    }
    if(c==1){
        return t;
    }
    else dfs(t);
}
int main(){
    int Q;
    cin>>Q;
    for(int i=0;i<Q;i++){
        int l,r,k,o=0;
        cin>>l>>r>>k;
        for(int j=l;j<=r;j++){
            if(dfs(j)==k){
                o++;
            }
        }
        cout<<o<<endl;
    }
}
