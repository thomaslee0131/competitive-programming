class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        int n = events.size();
        sort(events.begin(), events.end(), [](vector<int> a, vector<int> b){
            return a[0] < b[0];
        });
        auto comp = [](vector<int> a, vector<int> b){
            return a[1] > b[1];
        };
        priority_queue<vector<int>, vector<vector<int>>, decltype(comp)> pq(comp);
        int p = 0, ans = 0;
        for(int d = 1; d < 1e5+1; d++){
            for(;p < n; p++){
                if(events[p][0] <= d && events[p][1] >= d){
                    pq.push(events[p]);
                }
                else if(d < events[p][0]){
                    break;
                }
                else{
                    continue;
                }
            }
            while(!pq.empty()){
                vector<int> now = pq.top();
                if(now[0] <= d && now[1] >= d){
                    ans++;
                    pq.pop();
                    break;
                }
                else{
                    pq.pop();
                    continue;
                }
            }
        }
        return ans;
    }
};
