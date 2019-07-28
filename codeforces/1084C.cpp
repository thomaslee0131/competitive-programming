#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
char s[100010];
vector<int>group;
int main(){
    int num=0;
    cin>>s;
    int len=strlen(s);
    bool f=0;
    for(int cnt=0;cnt<len;cnt++){
        if(s[cnt]=='a'){
            num++;
            f=1;
        }
        if(s[cnt]=='b'&&f){
            group.push_back(num);
            num=0;
            f=0;
        }
    }
    group.push_back(num);
    long long ans=1;
    for(int i=0;i<(int)group.size();i++){
        ans*=(group[i]+1);
        ans%=(int)1e9+7;
    }
    ans--;
    cout<<ans<<endl;
}
