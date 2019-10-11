class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int>ans;
        vector<int>fw;
        for(string s: words){
            char small='z';
            map<char,int>cnt;
            for(int i=0;i<s.length();i++){
                cnt[s[i]]++;
                if(s[i]<small){
                    small=s[i];
                }
            }
            fw.push_back(cnt[small]);
        }
        for(int i=0;i<queries.size();i++){
            int f=0;
            char small='z';
            map<char,int>cnt;
            for(int j=0;j<queries[i].length();j++){
                cnt[queries[i][j]]++;
                if(queries[i][j]<small){
                    small=queries[i][j];
                }
            }
            f=cnt[small];
            int num=0;
            for(int j=0;j<fw.size();j++){
                if(f<fw[j]) num++;
            }
            ans.push_back(num);
        }
        return ans;
    }
};
