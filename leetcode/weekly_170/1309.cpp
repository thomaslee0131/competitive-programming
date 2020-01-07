class Solution {
public:
    string freqAlphabets(string s) {
        int n = s.length();
        vector<char> res;
        for(int i = n-1; i >= 0; i--){
            if(s[i] == '#'){
                res.push_back(s[i-1]-'0'+(s[i-2]-'0')*10+'a'-1);
                i-=2;
                continue;
            }
            res.push_back(s[i]-'0'+'a'-1);
        }
        string ans = "";
        for(int i = res.size()-1; i >= 0; i--){
            ans += res[i];
        }
        return ans;
    }
};
