#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
vector<long long>neg;
long long pos;
long long num[1000010];
int main(){
    long long n,ans=0,cnt=0,posmin=1e9;
    cin>>n;
    if(n==3){
        for(long long i=0;i<3;i++){
            long long a;
            cin>>a;
            if(i==0||i==2){
                ans+=a;
            }
        }
        cout<<ans<<endl;
        return 0;
    }
    for(long long i=0;i<n;i++){
        long long a;
        cin>>a;
        num[i]=a;
        if(a>=0){
            ans+=a;
            cnt++;
            if(i!=0&&i!=n-1){
                posmin=min(posmin,a);
            }
            pos=i;
        }
        else{
            if(i==0){
                cnt++;
                ans+=a;
            }
            neg.push_back(a);
        }
    }
    if(cnt==n){
        ans-=posmin;
    }
    long long negp[2][3];
    negp[1][0]=-1e9;
    negp[1][1]=-1e9;
    negp[1][2]=-1e9;
    negp[0][0]=0;
    negp[0][1]=0;
    negp[0][2]=0;
    for(int i=0;i<n;i++){
        cout<<num[i]<<' ';
    }
    for(long long i=0;i<n;i++){
        if(num[i]<0){
            if(num[i]>negp[1][0]){
                negp[1][2]=negp[1][1];
                negp[0][2]=negp[0][1];
                negp[1][1]=negp[1][0];
                negp[0][1]=negp[0][0];
                negp[1][0]=num[i];
                negp[0][0]=i;
                continue;
            }
            if(num[i]>negp[1][1]){
                negp[1][2]=negp[1][1];
                negp[0][2]=negp[0][1];
                negp[1][1]=num[i];
                negp[0][1]=i;
                continue; 
            }
            if(num[i]>negp[1][2]){
                negp[0][2]=i;
                negp[1][2]=num[i];
                continue;
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<negp[i][j]<<' ';
        }
        cout<<endl;
    }
    if(cnt==0){
        if(negp[0][0]-negp[0][1]!=1&&negp[0][0]-negp[0][1]!=-1){
            ans=negp[1][0]+negp[1][1];
        }
        else if(negp[0][0]-negp[0][2]!=1&&negp[0][0]-negp[0][2]!=-1){
            ans=negp[1][2]+negp[1][0];
        }
        else{
            ans=negp[1][1]+negp[1][2];
        }
    }
    if(cnt==1){
        if(negp[0][0]-pos!=1&&negp[0][0]-pos!=-1){
            ans+=negp[1][0];
        }
        else if(negp[0][1]-pos!=1&&negp[0][1]-pos!=-1){
            ans+=negp[1][1];
        }
        else{
            ans+=negp[1][2];
        }
    }
    /*for(int i=0;i<neg.size();i++){
        cout<<neg[i]<<endl;
    }*/
    cout<<ans<<endl;
}
