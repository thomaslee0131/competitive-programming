#include<iostream>
#include<vector>
using namespace std;
int a[11];
vector<int>ans;
int main(){
    int n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(n==2&&a[0]==a[1]){
        cout<<-1<<endl;
        return 0;
    }
    if(n==1){
        cout<<-1<<endl;
        return 0;
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        ans.push_back(i+1);
        cnt+=a[i];
        sum-=a[i];
        if(cnt!=sum){
            break;
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<(int)ans.size();i++){
        cout<<ans[i];
        printf("%c",i==(int)ans.size()?' ':'\n');
    }

}
