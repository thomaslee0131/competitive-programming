#include<iostream>
#include<algorithm>
using namespace std;
int siz[200066];
int main(){
    int n,k;
    cin>>n>>k;
    int ans=n;
    for(int i=0;i<n;i++){
        cin>>siz[i];
    }
    sort(siz,siz+n);
    for(int i=0;i<n-1;i++){
        if(siz[i+1]-siz[i]<=k  &&  siz[i+1]-siz[i]>0){
            //cout<<"pop"<<siz[i]<<endl;
            ans--;
            for(int j=i-1;j>=0;j--){
                if(siz[i]!=siz[j]){
                    break;
                }
                else ans--;
            }
        }
    }
    cout<<ans<<endl;
}
