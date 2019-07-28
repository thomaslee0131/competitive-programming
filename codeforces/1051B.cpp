#include<iostream>
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long l,r;
    cin>>l>>r;
    int cnt=0;
    cout<<"YES"<<endl;
    for(long long i=l;i<=r;i++){
        cout<<i;
        if(cnt%2){
            cout<<endl;
        }
        else{
            cout<<' ';
        }
        cnt++;
    }   
}
