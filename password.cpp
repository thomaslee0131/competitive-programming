#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int s;
vector<int>ans;
bool seen[10];
int absa(int a){
    if(a<0)return -a;
    return a;
}
int turn(int a,int b){
    int ti=0;
    for(int c=1;c<1000000;c*=10){
        int d=absa((a/c)%10-(b/c)%10);
        ti+=min(d,10-d);
    }
    return ti;
}
int minn=30;
bool chk(int a){
    int b=1;
    for(int i=0;i<6;i++){
        if(seen[(a/b)%10]){
            return false;
        }
        seen[(a/b)%10]=1;
        b*=10;
    }
    return true;
}
int main(){
    int str=0;
    cin>>s;
    for(int i=0;i<1000000;i++){
        if(chk(str)){
            int times=turn(s,str);
            if(times<minn){
                ans.clear();
            }
            if(times<=minn){
                ans.push_back(str);
            }
            minn=min(minn,times);
        }
        for(int j=0;j<10;j++){
            seen[j]=0;
        }
        str++;
    }
    cout<<ans.size()<<' '<<minn<<endl;
    for(int i=0;i<ans.size();i++){
        printf("%06d",ans[i]);
        if(i==ans.size()-1)cout<<endl;
        else cout<<' ';
    }
}
