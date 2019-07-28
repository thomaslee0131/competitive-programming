#include<iostream>
#include<vector>
using namespace std;

const int MAXN=(int)1e5+3;
int a,b,n,g;
bool has[10];
int dist[MAXN];
vector<int>g[MAXN]

int gcd(int a, int b) {
   if (b == 0)return a;
   return gcd(b, a % b);
}

void init(){
    cin>>a>>b>>n;
    g=gcd(a,b);
    for(int i=0;i<10;i++)has[i]=0;
    for(int i=0;i<n;i++){
        int d; cin>>d;
        has[d]=1;
    }
    for(int i=0;i<n;i++){
        
    }
}

void solve(){}

int main(){
    
}
