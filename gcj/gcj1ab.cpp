#include<iostream>
#include<cassert>
#include<vector>
using namespace std;
int main(){
    int t,n,m;
    cin>>t>>n>>m;
    const int nums[]={3,4,5,7,11,13,17};
    for(int I=1;I<=t;I++){
        vector<int>rem;
        for(int i:nums){
            for(int j=0;j<18;j++){
                cout<<i;
                if(j==17)cout<<endl;
                else cout<<' ';
            }
            int turns=0;
            for(int j=0;j<18;j++){
                int a;
                cin>>a;
                turns+=a;
            }
            rem.push_back(turns%i);
        }
        bool finished=0;
        int ans=0;
        for(int i=1;i<=m;i++){
            int ind=0;
            if(!finished){
                for(int j:nums){
                    int r=i%j;
                    if(r!=rem[ind]){
                        break;
                    }
                    if(ind==6){
                        ans=i;
                        finished=1;    
                    }
                    ind++;
                }
            }
            else break;
        }
        cout<<ans<<endl;
        int z;
        cin>>z;
        assert(z!=-1);
    }
}
