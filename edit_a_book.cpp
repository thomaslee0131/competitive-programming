#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;
vector<int>book;
queue<pair<vector<int>,int>>q;
void pushvec(vector<int>& v, const vector<int>& from, int start, int end){
    for(int i=start;i<end;i++){
        v.push_back(from[i]);
    }
}

unordered_map<long long,int> dis[2];

long long h(const vector<int>& v){
    long long ret=0;
    for(int n:v){
        ret*=10;
        ret+=n-1;
    }
    return ret;
}

void printvec(const vector<int>& v){
    for(auto x:v)cout << x << " ";
    cout << endl;
}

void bfs(unordered_map<long long,int>& nowdis){
    while(q.size()){
        auto b = q.front().first;
        int step = q.front().second;
        if(step>3)break;
        q.pop();
        if(nowdis.count(h(b)))continue;
        nowdis[h(b)]=step;

        for(int i=0;i<(int)b.size();i++){
            for(int j=i+1;j<(int)b.size();j++){
                vector<int>cbook;
                pushvec(cbook,b,0,i);
                pushvec(cbook,b,j,b.size());
                for(int k = 0 ; k <= (int)cbook.size() ; k ++){
                    vector<int> next;
                    pushvec(next,cbook,0,k);
                    pushvec(next,b,i,j);
                    pushvec(next,cbook,k,cbook.size());
                    q.push({move(next),step+1});
                }
            }
        }
    }
    while(q.size())q.pop();
}
int main(){
    int n;
    while(cin>>n){
        if(!n){
            break;
        }
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            book.push_back(a);
        }
        q.push({book,0});
        bfs(dis[0]);
        //cout << "FIN0" << endl;
        vector<int>s;
        for(int i=1;i<=n;i++){
            s.push_back(i);
        }
        q.push({s,0});
        bfs(dis[1]);
        //cout << "FIN1" << endl;
        int ans = 999;
        for(const auto& [v,step]:dis[0]){
            if(dis[1].count(v)){
                ans=min(ans,step+dis[1][v]);
            }
        }
        cout<<ans<<endl;
    }
}
