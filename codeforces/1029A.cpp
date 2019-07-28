#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n,k;
vector<int> f;
int main(){
    cin>>n>>k;
    string s;
    cin>>s;
    bool doable=0;
    //int f;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[n-1]){doable=1;f.push_back(i);}
    }
    reverse(f.begin(),f.end());
    //cout<<f;
    if(doable){
        for(auto x:f){
            bool same=1;
            for(int i=x;i>=0;i--){
                if(s[i]!=s[i+n-x-1])same=0;
            }
            //cout<<same;
            if(same){
                int pointer=0;
                while(k){
                    cout<<s[pointer];
                    if(pointer==n-1){
                        pointer=x+1;
                        k--;
                        continue;
                    }
                    pointer++;
                }
                return 0;
            }
        }
    }
    while(k--){
        cout << s;
    }
    cout<<endl;
}
