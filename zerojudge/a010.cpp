#include<iostream>
#include<vector>
using namespace std;
bool isprime[1005];
vector<int>prime;
void make_prime(){
    for(int i=2;i<1005;i++){
        if(isprime[i]){
            prime.push_back(i);
            for(int j=i*2;j<1005;j+=i){
                isprime[j]=0;
            }
        }
    }
}
int main(){
    int n;
    for(int i=0;i<1005;i++)isprime[i]=1;
    make_prime();
    while(cin>>n){
        bool first=1;
        for(int p : prime){
            int cnt=0;
            while(n%p==0){
                n/=p;
                cnt++;
            }
            if(cnt>0){
                if(first)first=0;
                else cout<<" * ";
                cout<<p;
                if(cnt>1)cout<<'^'<<cnt;
            }
        }
        if(n!=1){
            cout<<" * "<<n;
        }
        cout<<endl;
    }
}
