#include<iostream>
#include<cmath>
#include<queue>
using namespace std;
priority_queue<pair<double,long long>>q;
double po[4];
int used[4];
int days;
void dfs(int now,long double pos,int rem){
    if(now==3){??/
        used[3]=rem;
        while(rem--)pos*=po[3];
        q.push({pos,    })
    }
    for(int i=0;i<=left;i++){
        use[now]=i;
        dfs(now+1,pos,rem-i);
        pos*=po[now];
    }
}
void init(){
    cin>>days;
    for(int i=0;i<4;i++)cin>>po[i];
    dfs(0,1,days);
}


void solve(){
    long double ans=0;
    while(q.size()!=1||q.top().second!=1){
        if(q.top().second==1){
            double v=q.top().first;
            q.pop();
            double vp=q.top().first;
            double cntp=q.top().second;
            q.pop();
            q.push({v+vp,1});
            ans+=v+vp;
            if(cntp-1){
                q.push({vp,cntp-1});
            }
        }
        else{
            double v=q.top().first;
            double cnt=q.top().second;
            q.pop();
            q.push({v*2,cnt/2});
            ans+=v*2*(cnt/2);
            if(cnt%2==1){
                q.push({v,1});
            }
        }
    }
}


int main(){
}
