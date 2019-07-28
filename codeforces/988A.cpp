#include<iostream>
#include<vector>
using namespace std;
vector<int>output;
bool seen[101];
int main(){
    int n,k;
    cin>>n>>k;
    int cnt=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(seen[a]==0){
            cnt++;
            seen[a]=1;
            output.push_back(i+1);
        }
        if(cnt==k){
            break;
        }
    }
    if(cnt==k){
        cout<<"YES"<<endl;
        for(int i=0;i<k;i++){
            cout<<output[i];
            if(i==k-1){
                cout<<endl;
            }
            else cout<<' ';
        }
    }
    else cout<<"NO";
}
