class Solution {
public:
    vector<int> fs;
    bool visited[101];
    int d[101];
    vector<string> watchedVideosByFriends(vector<vector<string>>& watchedVideos, vector<vector<int>>& friends, int id, int level) {
        for(int i = 0; i < 101; i++){
            d[i] = 1e5;
        }
        queue<int> q;
        q.push(id);
        d[id] = 0;
        while(!q.empty()){
            int now = q.front(); q.pop();
            for(int i = 0; i < friends[now].size(); i++){
                if(!visited[friends[now][i]]){
                    q.push(friends[now][i]);
                    d[friends[now][i]] = min(d[now]+1, d[friends[now][i]]);
                    visited[friends[now][i]] = 1;
                    if(d[friends[now][i]] == level)
                        fs.push_back(friends[now][i]);
                }
            }
        }
        unordered_map<string, int> occ;
        for(auto& f: fs){
            for(auto& wv: watchedVideos[f]){
                occ[wv]++;
            }
        }
        map<int, vector<string>> vs;
        for(auto& [key, val]: occ){
            vs[val].push_back(key);
        }
        vector<string> tem, ans;
        for(auto& [key, vec]: vs){
            sort(vec.begin(), vec.end());
            for(auto& s: vec){
                tem.push_back(s);
            }
        }
        return tem;
    }
};
