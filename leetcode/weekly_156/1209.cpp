class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char, int>> v;
        int n = s.length();
        int cnt=0;
        for(int i=0;i<n;i++){
            if(!i){
                cnt++;
                continue;
            }
            if(s[i]!=s[i-1]){
                v.push_back({s[i-1], cnt});
                cnt = 0;
            }
            cnt++;
        }
        v.push_back({s[n-1], cnt});
        /*for(auto [c, n]: v){
            cout<<c<<' '<<n<<endl;
        }*/
        bool done = 0;
        while(!done){
            done = 1;
            for(int i=0;i<v.size();i++){
                char c = v[i].first;
                int n = v[i].second;
                if(n < k) continue;
                if(n == k){
                    v.erase(v.begin()+i);
                    i--;
                    done = 0;
                }
                else{
                    v[i].second-=k;
                    done = 0;
                }
            }
            for(int i=1;i<v.size();i++){
                if(v[i].first == v[i-1].first){
                    v[i-1].second+=v[i].second;
                    v.erase(v.begin()+i);
                    i--;
                }
            }
        }
        string ans = "";
        for(auto [c, n]: v){
            while(n--){
                ans+=c;
            }
        }
        return ans;
    }
};
