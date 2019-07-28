#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,a;
    for(cin>>t; t--; cout<<a<<'\n')
    {
        bitset<256>b;
        for(cin>>n>>k;k--;b[a-1]=1)
        cin>>a;
        for(a=1; b.count()<n; ++a)
        b|=b<<1|b>>1,b[n]=0;
    }
}
