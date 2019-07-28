#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>num;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int z;
        cin>>z;
        num.push_back(z);
    }
    sort(num.begin(),num.end());
    int p1=0,p2=1;
    int ans=0;
    while(p1<n){
        for(;p2<n;p2++){
            int diff=num[p2]-num[p1];
            if(diff>5){
                ans=max(ans,p2-p1);
                break;
            }
            
        }
        //cout<<p2<<' '<<p1<<endl;
        ans=max(ans,p2-p1);
        p1++;
    }
    cout<<ans<<endl;
}
