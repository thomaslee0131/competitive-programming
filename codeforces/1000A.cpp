#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <string> pre;
    vector <string> th;
    int n;
    cin>>n;
    for(int i=1;i<=2*n;i++){
        string s;
        cin>>s;
        if(i%2==1)pre.push_back(s);
        else{
            th.push_back(s);
        }
    }
    int ans=n;
    for(int i=0;i<(int)pre.size();i++){
        for(int j=0;j<(int)th.size();j++){
            if(pre[i]==th[j]){
                ans--;
                //cout<<"-"<<th[j]<<endl;
                th[j]="0";
                break;
            }
        }
    }
    cout<<ans<<endl;

}
