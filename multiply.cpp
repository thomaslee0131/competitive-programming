#include<iostream>
using namespace std;
#include<vector>
int arr[100010];
int kprime[25];
int t[100];
const vector<int> prime={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
void f(int a){
    int b=0;
    while(1){
        if(a%prime[b]==0){
            a/=prime[b];
            t[prime[b]]++;
        }
        else{
            b++;
            if(b==25){
                break;
            }
        }
    }
}
void fi(int a){
    int b=0;
    while(1){
        if(a%prime[b]==0){
            a/=prime[b];
            t[prime[b]]--;
        }
        else{
            b++;
            if(b==25){
                break;
            }
        }
    }
}
bool check(){
    for(int i=0;i<25;i++){
        if(kprime[i]>t[prime[i]]){
            return false;
        }
    }
    return 1;
 
}
int main(){
    long long ans=0;
    int n,k,a=0;
    cin>>n>>k;
    while(1){
        if(k%prime[a]==0){
            k/=prime[a];
            kprime[a]++;
        }
        else{
            a++;
            if(a==25){
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0,r=0;
    while(r<n){
        f(arr[r]);
        if(check()){
            break;
        }
        else r++;
    }
    if(r==n){
        cout<<0<<endl;
        return 0;
    }
    while(l<r){
        fi(arr[l]);
        if(check()){
            l++;
        }
        else{
            f(arr[l]);
            break;
        }
    }
    ans+=(l+1);
    r++;
    for(;r<n;r++){
        f(arr[r]);
        while(l<r){
            fi(arr[l]);
            if(check()){
                l++;
            }
            else{
                f(arr[l]);
                break;
            }
        }
        ans+=l+1;
    }
    cout<<ans<<endl;
}
