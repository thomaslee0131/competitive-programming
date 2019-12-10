#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int arr[200006] = {0};
        int n; cin>>n;
        int ans = 200006;
        for(int i = 1; i <= n; i++){
            int x; cin>>x;
            if(arr[x])
                ans = min(ans, i-arr[x]+1);
            arr[x] = i;
        }
        ans = ans==200006?-1:ans;
        cout<<ans<<endl;
    }
}
