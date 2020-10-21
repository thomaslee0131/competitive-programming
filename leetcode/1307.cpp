#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int cnt[256];
    int has[256];
    bool used[10];
    vector<char> chars;
    bool ans;
    void dfs(int n, int sum){
        if(ans)
            return;
        if(n == chars.size()){
            if(sum == 0){
                ans = true;
            }
            return;
        }
        for(int i = 0; i < 10; i++){
            if(used[i] == 0){
                used[i] = 1;
                dfs(n+1, sum+i*cnt[chars[n]]);
                used[i] = 0;
            }
        }
    }
    bool isSolvable(vector<string> words, string res) {
        fill(cnt, cnt+256, 0);
        fill(has, has+256, 0);
        fill(used, used+10, 0);
        chars.clear();
        ans = 0;
        
        for(auto& w: words){
            int power = 1;
            for(int i = w.length()-1; i >= 0; i--){
                if(!has[w[i]]){
                    chars.push_back(w[i]);
                    has[w[i]] = 1;
                }
                cnt[w[i]] += power;
                power *= 10;
            }
        }
        int power = 1;
        for(int i = res.length()-1; i >= 0; i--){
            if(!has[res[i]]){
                chars.push_back(res[i]);
                has[res[i]] = 1;
            }
            cnt[res[i]] -= power;
            power *= 10;
        }
        for(int i = 'A'; i <= 'Z'; i++){
            cout<<cnt[i]<<endl;
        }
        dfs(0, 0);
        return ans;
    }
};

int main(){
    Solution s;
    cout<<s.isSolvable({"AB","CD","EF"}, "GHIJ");
}
