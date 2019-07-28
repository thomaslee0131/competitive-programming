#include<iostream>
#include<vector>
using namespace std;
bool num[100010];
vector<int>prime;
void mprime(){
    for(int i=2;i<100010;i++){
        if(num[i]==0){
            prime.push_back(i);
            for(int j=i*2;j<100010;j+=i){
                num[j]=1;
            }
        }
    }
}
long long ans;
long long solve(long long n){
    if(n==0){
        return ans; 
    }
    for(int i=0;i<(int)prime.size();i++){
        if(prime[i]>n){
            break;
        }
        if(n%prime[i]==0){
            ans++;
            return solve(n-prime[i]);
        }
    }
    ans++;
    return solve(0);
}
int main(){
    long long n;
    cin>>n;
    mprime();
    for(int i=0;i<23;i++){
        cout<<prime[i]<<' ';
    }
    solve(n);
    cout<<ans<<endl;
}
