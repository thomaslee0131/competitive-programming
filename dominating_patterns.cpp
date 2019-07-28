#include<iostream>
#include<vector>
using namespace std;
pair<int,string> pat[155];
int main(){
    int n;
    while(cin>>n){
        if(!n){
            return 0;
        }
        string s;
        for(int i=0;i<n;i++){
            cin>>pat[i].second;
        }
        cin>>s;
    }
}
