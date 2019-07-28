#include<iostream>
#include<vector>
using namespace std;
vector<int> chk[100010];
int main(){
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int zero=0,one=0;
    for(int i=0;i<n;i++){
        if(a[i]=='0')zero++;
        else one++;
    }
    int zt=0,ot=0;
    long long cnt=0;
    for(int i=0;i<n;i++){
        if(b[i]=='0'){
            if(a[i]=='0'){zt++;cnt+=one-ot;}
            else {ot++;cnt+=zero-zt;}
        }
    }
    cout<<cnt<<endl;
}
