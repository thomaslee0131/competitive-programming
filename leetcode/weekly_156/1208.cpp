class Solution {
public:
    int abs(int n){
        return n<0?-n:n;
    }
    int equalSubstring(string s, string t, int k) {
        int n = s.length();
        vector<int> diff;
        for(int i=0;i<n;i++){
            diff.push_back(abs(s[i]-t[i]));
        }
        int sum = 0, cnt = 0, maxcnt = 0; 
        for(int i=0;i<n;i++){
            if(sum + diff[i] <= k){
                sum += diff[i];
                cnt++;
            }
            else if(sum!=0) { 
                sum = sum - diff[i - cnt] + diff[i]; 
            }
            maxcnt = max(cnt, maxcnt);
        }
        return maxcnt;
    }
};
