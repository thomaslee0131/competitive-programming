class Solution {
public:
    string findLexSmallestString(string s, int a, int b) {
        string ans = s;
        int n = s.length();
        if(b % 2){
            for(int i = 0; i < 10; i++){
                for(int j = 0; j < 10; j++){
                    string now = s;
                    for(int k = 0; k < n; k++){
                        if(k % 2){
                            now[k] = (now[k] - '0' + a * i) % 10 + '0';
                        }
                        else{
                            now[k] = (now[k] - '0' + a * j) % 10 + '0';
                        }
                    }
                    for(int k = 0; k < n; k++){
                        int idx = (k * b) % n;
                        string cycled = now.substr(idx, n - idx) + now.substr(0, idx);
                        ans = min(ans, cycled);
                    }
                }
            }
        }
        else{
            for(int i = 0; i < 10; i++){
                string now = s;
                for(int k = 0; k < n; k++){
                    if(k % 2){
                        now[k] = (now[k] - '0' + a * i) % 10 + '0';
                    }
                }
                for(int k = 0; k < n; k++){
                    int idx = (k * b) % n;
                    string cycled = now.substr(idx, n - idx) + now.substr(0, idx);
                    ans = min(ans, cycled);
                }
            }
        }
        return ans;
    }
};
