#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    int p[6];
    while(t--){
        for(int i=0;i<6;i++){
            cin>>p[i];
        }
        bool yes=0;
        for(int i=0;i<6;i++){
            for(int j=i+1;j<6;j++){
                for(int k=j+1;k<6;k++){
                    int suma=0,la=0;
                    for(int z=0;z<6;z++){
                        if(z!=i&&z!=j&&z!=k){
                            suma+=p[z];
                            la=max(la,p[z]);
                        }
                    }
                    int sum=p[i]+p[j]+p[k];
                    int l=max({p[i],p[j],p[k]});
                    if(l<sum-l&&la<suma-la){
                        cout<<"Yes"<<endl;
                        yes=1;
                        //cout<<l<<' '<<sum<<' '<<la<<' '<<suma<<endl;
                        break;
                    }
                }
                if(yes)break;
            }
            if(yes)break;
        }
        if(!yes)cout<<"No"<<endl;
    }
}
