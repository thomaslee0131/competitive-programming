#include<iostream>
using namespace std;
int A[100009];
int B[100009];
int ans[100009];
int solve(int a,int b,int x){
    int y=((b^x)^(a^b))|b;
    if((x|y)==a&&(x&y)==b){
        return y;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        cin>>A[i];
    }
    for(int i=0;i<n-1;i++){
        cin>>B[i];
    }
    bool y=0;
    for(int i=0;i<4;i++){
        ans[0]=i;
        for(int j=1;j<n;j++){
            int s=solve(A[j-1],B[j-1],ans[j-1]);
            //cout<<A[j-1]<<' '<<B[j-1]<<' '<<ans[j-1]<<' '<<s<<endl;
            if(s<0){
                break;
            }
            if(j==n-1&&s>=0){
                y=1;
            }
            ans[j]=s;
        }
        if(y)break;
    }
    if(!y){cout<<"NO"<<endl;return 0;}
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
        cout<<ans[i];
        if(i==n-1){
            cout<<endl;
        }
        else cout<<' ';
    }
}

