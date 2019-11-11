class Solution {
public:
    int cnt[26];
    
    void make_nowcnt(int nowcnt[], int s, vector<string>& words, int n){
        for(int i=n-1;i>=0;i--){
            if(s&(1<<i)){
                for(char c:words[i]){
                    nowcnt[c-'a']++;
                }
            }
        }
    }
    
    int getcost(int nowcnt[], vector<int>& score){
        int nowscore = 0;
        for(int i=0;i<26;i++){
            if(nowcnt[i] > cnt[i]){
                return -1;
            }
            nowscore += nowcnt[i] * score[i];
        }
        return nowscore;
    }
    
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        int n = words.size();
        for(char& c: letters){
            cnt[c-'a']++;
        }
        int ans = 0;
        for(int s=1;s<(1<<n);s++){
            int nowcnt[26] = {};
            make_nowcnt(nowcnt, s, words, n);
            int cost = getcost(nowcnt, score);
            ans = max(ans, cost);
        }
        return ans;
    }
};
