#include<iostream>
using namespace std;
int ex[5010];
int main(){
    int t;
    cin>>t;
    for(int I=1;I<=t;I++){
        int n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>ex[i];
        }
        sort(ex,ex+n);
        int eaten=0,num=0;
        for(int i=1;i<=n;i++){
            int j=k;
            while(j){
                if(num>=n)break;
                if(ex[num]>=i){
                    eaten++;
                    j--;
                    num++;
                }
                else num++;
            }
        }
        cout<<"Case #"<<I<<": "<<eaten<<endl;
    }
}
