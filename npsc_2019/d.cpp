#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>
using namespace std;

int n;
int matrix[30][30];
long long ans;
bool used[30];

void solve(stack<int> g1){
    vector<int> g2;
    for(int i=0;i<n;i++){
        if(!used[i]){
            g2.push_back(i);
        }
    }
    long long res = 0;
    while(!g1.empty()){
        int y = g1.top(); g1.pop();
        for(auto& x: g2){
            res += matrix[y][x];
        }
    }
    ans = max(res, ans);
}

void rec(int cnt, stack<int>& g1, int&sum){
    if(cnt == n/2){
        solve(g1);
        return;
    }
    for(int i=0;i<n;i++){
        if(!used[i]){
            g1.push(i);
            used[i] = 1;
            int sum = 0;
            rec(cnt+1, g1, sum);
            g1.pop();
            used[i] = 0;
        }
    }
}

int main(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    n*=2;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    stack<int> g1;
    rec(0, g1);
    cout<<ans<<endl;
}
