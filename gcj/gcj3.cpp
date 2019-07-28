#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<numeric>
#include<map>
using namespace std;
vector<long long>pro;
vector<long long>prime;
vector<long long>num;
map<long long,int>seen;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void back(int n){
    for(int i=n-1;i>=0;i--){
        num[i]/=num[i+1];
        if(!seen[num[i]]){prime.push_back(num[i]);seen[num[i]]=1;}
    }
}


int main(){
    int t;
    cin>>t;
    for(int I=1;I<=t;I++){
        long long n,l;
        cin>>n>>l;
        pro.clear();
        prime.clear();
        num.clear();
        seen.clear();
        for(int i=0;i<l;i++){
            long long p;
            cin>>p;
            pro.push_back(p);
        }
        bool dk=0,first=1;;
        for(int i=0;i<l-1;i++){
            int _gcd=gcd(pro[i],pro[i+1]);
            if(_gcd==pro[i]&&first){
                dk=1;
                num.push_back(pro[i]);
                continue;
            }
            if(first){
                first=0;
                int a=pro[i]/_gcd,b=pro[i+1]/_gcd;
                if(!seen[a]){prime.push_back(a);seen[a]=1;}
                if(!seen[_gcd]){prime.push_back(_gcd);seen[_gcd]=1;}
                if(!seen[b]){prime.push_back(b);seen[b]=1;}
                num.push_back(a);
                num.push_back(_gcd);
                num.push_back(b);
                if(dk){
                    back(i);
                    dk=0;
                }
                continue;
            }
            int b=pro[i+1]/num[i+1];
            num.push_back(b);
            if(!seen[b]){prime.push_back(b);seen[b]=1;}
        }
        sort(prime.begin(),prime.end());
        cout<<"Case #"<<I<<": ";
        map<int,char>al;
        for(int i=0;i<(int)prime.size();i++){
            al[prime[i]]='A'+i;
        }
        for(int i=0;i<(int)num.size();i++){
            cout<<al[num[i]];
        }
        cout<<endl;
        /*for(int i=0;i<prime.size();i++){
            cout<<prime[i]<<' ';
        }
        cout<<endl;
        for(int i=0;i<num.size();i++){
            cout<<num[i]<<' ';
        }
        cout<<endl;*/
    }
}
