class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int>cnt;
        for(char c:text){
            cnt[c]++;
        }
        int ans=min({cnt['b'], cnt['a'], cnt['l']/2, cnt['o']/2, cnt['n']});
        return ans;
    }
};
