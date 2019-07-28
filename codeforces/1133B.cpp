#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
map<int,int>m;
int main(){
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int z;
        cin>>z;
        m[z%k]++;
    }
    int mid=k/2+1;
    if(k==2){
        cout<<2*(m[0]/2+m[1]/2);
        return 0;
    }
    int ans=0;
    ans+=2*(m[0]/2);
    for(int i=1;i<mid;i++){
        if(i==k-i){
            ans+=2*(m[i]/2);
            break;
        }
        ans+=2*min(m[i],m[k-i]);
    }
    cout<<ans<<endl;
}
