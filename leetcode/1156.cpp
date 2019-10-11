class Solution {
public:
    int maxRepOpt1(string text) {
        vector<pair<char,int>> v;
        map<char, int> num;
        int cnt=0;
        char pre='0';
        for(char c: text){
            num[c]++;
            if(cnt==0){
                pre=c;
                cnt++;
                continue;
            }
            if(c!=pre){
                v.push_back({pre, cnt});
                cnt=0;
            }
            cnt++;
            pre=c;
        }
        v.push_back({pre, cnt});
        int ans=0;
        for(auto [c,n]: v){
            if(n<num[c]) n++;
            ans=max(ans, n);
        }
        int s=v.size()-2;
        for(int i=0;i<s;i++){
            if(v[i].first==v[i+2].first && v[i+1].second==1){
                if(v[i].second+v[i+2].second < num[v[i].first])
                    ans=max(ans, v[i].second+v[i+2].second+1);
                else
                    ans=max(ans, v[i].second+v[i+2].second);
            }
        }
        return ans;
    }
};
