#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>seg;
    int pre=0,one=1,two=1;
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        if(d==pre){
            if(d==1)one++;
            else two++;
        }
        else{
            if(d==1){
                one=1;
                seg.push_back(two);
                two=1;
            }
            else{
                two=1;
                seg.push_back(one);
                one=1;
            }
        }
        pre=d;
    }
    seg.push_back(pre==1?one:two);
    int ans=0;
    for(int i=0;i<(int)seg.size()-1;i++){
        ans=max(min(seg[i],seg[i+1]),ans);
    }
    cout<<ans*2<<endl;
}
