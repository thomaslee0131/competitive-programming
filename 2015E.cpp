#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t,c=1,ans=0;
    cin>>t;
    string s;
    for(int a=0;a<t;a++){
        cin>>s;
        ans=0;
        for(int i=0;i<26;i++){
            c=1;
            int b=i+1;
            for(int j=i+1;j<26;j++){
                if(b>s.size()-1)b=0;
                if(s[i]!=s[b])
                    c++;
                if(s[i]==s[b])
                    break;
                b++;
            }
            ans=max(ans,c);
        }
        cout<<ans<<endl;
    }
}
