class Solution {
public:
    bool isPossible(vector<int>& target) {
        int n = target.size();
        priority_queue<long long> pq;
        long long sum = 0;
        for(auto t: target){
            sum += t;
            pq.push(t);
        }
        while(sum > n){
            long long x = pq.top(); pq.pop();
            long long minus = sum-x;
            x -= minus;
            sum -= minus;
            if(x < 1) return 0;
            pq.push(x);
        }
        if(sum == n) return 1;
        return 0;
    }
};
