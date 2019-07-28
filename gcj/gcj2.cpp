#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int I=1;I<=t;I++){
        int n;
        cin>>n;
        vector<char>ans;
        for(int i=0;i<2*n-2;i++){
            char c;
            cin>>c;
            ans.push_back(c=='E'?'S':'E');
        }
        cout<<"Case #"<<I<<": ";
        for(char c:ans){
            cout<<c;
        }
        cout<<endl;
    }
}
