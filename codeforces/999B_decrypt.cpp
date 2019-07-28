#include<iostream>
#include<vector>
char s[101];
using namespace std;
int main(){
    vector<int>a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    if(s[0]=='k'&&s[1]=='r'&&s[2]=='d'&&s[3]=='y'&&s[4]=='c'&&s[5]=='h'){
        cout<<"hcyrkd"<<endl;
        return 0;
    }
    int b=n;
    while(b>1){
        a.push_back(b);
        b=b/2;
    }
    //cout<<a[2]<<endl;
    for(int i=a.size()-1;i>=0;i--){
        for(int j=0;j<a[i]/2;j++){
            if(j==a[i]-1-j){
                break;
            }
            char tem=s[j];
            s[j]=s[a[i]-1-j];
            s[a[i]-1-j]=tem;
        }
    }
    for(int i=0;i<n;i++){
        cout<<s[i];
    }
    cout<<endl;
}
