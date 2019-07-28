#include<iostream>
#include<vector>
using namespace std;


int pow=1;
long long val=2;
long long ans;
const int mod=(int)1e9+7;
vector<int>cons;

void p(int ex){
    for(int i=pow+1;i<=ex;i++){
        val*=2;
        val%=mod;
    }
    pow=ex;
}

void init(){
    val=2;
    ans=0;
    pow=1;
    cons.clear();
}

int main(){
    int t;cin>>t;
    for(int I=1;I<=t;I++){
        init();
        int n,k;cin>>n>>k;
        string s;cin>>s;
        int cnt=0,first=-1;
        char pre;
        for(char c:s){
            if(first<0){
                if(c=='A')first=1;
                else first=0;
                pre=c;
                cnt++;
                continue;
            }
            if(c!=pre){
                cons.push_back(cnt);
                cnt=0;
            }
            cnt++;
            pre=c;
        }
        cons.push_back(cnt);
        int past=0;
        for(int i=0;i<(int)cons.size();i++){
            if(i%2==first){
                int z=cons[i]-k;
                if(!(z%2))z/=2;
                else z=(z+1)/2;
                for(int j=1;j<=z;j++){
                    p(j+past);
                    cout<<val<<endl;
                    ans=(ans+val)%mod;
                }
            }
            past+=cons[i];
        }
        cout<<"Case #"<<I<<": "<<ans<<endl;
    }
}
